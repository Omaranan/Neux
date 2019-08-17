-- Project Generation : Neux
workspace "Neux"
	architecture "x64"
	startproject "Sandbox"

	configurations{
		"Debug",
		"Release",
		"Distribution"
	}

outputDir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"


project "Neux"
	location "Neux"
	kind "StaticLib"
	language "C++"
	cppdialect "C++17"
	staticruntime "on"

	targetdir ("bin/" .. outputDir .. "/%{prj.name}")
	objdir    ("bin-int/" .. outputDir .. "/%{prj.name}")

	files{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp",
	}

	defines{
		"_CRT_SECURE_NO_WARNINGS"
	}

	includedirs{
		"%{prj.name}/src"
	}

	links{
		"opengl32.lib"
	}

	filter "system:windows"
		systemversion "latest"

		defines{
			"NX_PLATFORM_WINDOWS",
			-- Since We Will Integrate GLFW in the Future
			"GLFW_INCLUDE_NONE"
		}

	filter "configurations:Debug"
		defines "NX_DEBUG"
		runtime "Debug"
		symbols "on"

	filter "configurations:Release"
		defines "NX_RELEASE"
		runtime "Release"
		optimize "on"

	filter "configurations:Distribution"
		defines "NX_DIST"
		runtime "Release"
		optimize "on"

project "Sandbox"
	location "Sandbox"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++17"
	staticruntime "on"

	targetdir ("bin/" .. outputDir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputDir .. "/%{prj.name}")

	files{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"	
	}

	includedirs{
		"Neux"
	}

	links {
		"Neux"
	}

	filter "system:windows"
		systemversion "latest"

		defines {
			"NX_PLATFORM_WINDOWS"
		}

	filter "configurations:Debug"
		defines "NX_DEBUG"
		runtime "Debug"
		symbols "on"

	filter "configurations:Release"
		defines "NX_RELEASE"
		runtime "Release"
		optimize "on"

	filter "configurations:Distribution"
		defines "NX_DIST"
		runtime "Release"
		optimize "on"
