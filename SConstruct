destination = ARGUMENTS.get("destination", "bin")

# Setting up our environment
env = SConscript("godot-cpp/SConstruct")
env.Append(CPPPATH=["src/"])

if env["platform"] == "windows":
  print("Not implemented!")
  exit(-1)
else:
  # Adding ffmpeg library locations for Linux
  env.Append(CPPPATH=["/usr/include/libavcodec"])
  env.Append(CPPPATH=["/usr/include/libavformat"])
  env.Append(CPPPATH=["/usr/include/libavfilter"])
  env.Append(CPPPATH=["/usr/include/libavdevice"])
  env.Append(CPPPATH=["/usr/include/libavutil"])
  env.Append(CPPPATH=["/usr/include/libswscale"])
  env.Append(CPPPATH=["/usr/include/libswresample"])

# Add ffmpeg libraries
env.Append(LIBS=["avcodec"])
env.Append(LIBS=["avformat"])
env.Append(LIBS=["avfilter"])
env.Append(LIBS=["avdevice"])
env.Append(LIBS=["avutil"])
env.Append(LIBS=["swscale"])
env.Append(LIBS=["swresample"])

src = Glob("src/*.cpp")

libpath = "{}/libgozen{}{}".format(destination, env["suffix"], env["SHLIBSUFFIX"])
sharedlib = env.SharedLibrary(libpath, src)
Default(sharedlib)
