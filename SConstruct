import os

def src_to_obj_path(src_file):
    try:
        src_path = src_file.get_path()
    except AttributeError:
        src_path = src_file
    path, fname = os.path.split(src_path)
    name, ext = os.path.splitext(fname)
    return "./obj/{0}.obj".format(name)

def compile_obj(env, srcfile, headers):
    return env.Object(src_to_obj_path(srcfile), srcfile, CPPPATH=headers)

def get_environment(platform):
    ccflag_opts = {
        "win32": "/c /EHsc"
    }
    ccflags = ccflag_opts[str(platform)]
    return Environment(PLATFORM=platform, CCFLAGS=ccflags)

def run_tests(platform):
    platform_name = str(platform)
    if platform_name == "win32":
        execute = Command("run", None, ".\\bin\\runtests.exe")
    else:
        raise ValueError("Platform isn't win32?")

platform = ARGUMENTS.get("OS", Platform())
env = get_environment(platform)

headers = ["./include", "./src/main", "./src/test"]

main_src = Glob("./src/main/*.cpp")
main_obj = [compile_obj(env, srcfile, headers) for srcfile in main_src]
main_entry = compile_obj(env, "./src/main.cpp", headers)
main = env.Program("./bin/main", [main_entry] + main_obj, CPPPATH=headers)

test_src = Glob("./src/test/*.cpp")
test_obj = [compile_obj(env, srcfile, headers) for srcfile in test_src]
test_entry = compile_obj(env, "./src/test.cpp", headers)
test = env.Program("./bin/runtests", [test_entry] + main_obj + test_obj, CPPPATH=headers)

AlwaysBuild(test)
run_tests(platform)
