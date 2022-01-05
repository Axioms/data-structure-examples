##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Lab_6
ConfigurationName      :=Debug
WorkspacePath          :="D:/Users/axiom/Documents/drive/College/Second Year/Spring Semester/Data Structures Lab/Labs"
ProjectPath            :="D:/Users/axiom/Documents/drive/College/Second Year/Spring Semester/Data Structures Lab/Labs/Lab_6"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=axiom
Date                   :=02/05/2020
CodeLitePath           :="D:/Program Files/CodeLite"
LinkerName             :=C:/MinGW/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Lab_6.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe
LinkOptions            :=  -static-libgcc -static-libstdc++
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe
CC       := C:/MinGW/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=D:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/src_sequence_exam3.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_sequence3.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_node1.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/src_sequence_exam3.cpp$(ObjectSuffix): src/sequence_exam3.cpp $(IntermediateDirectory)/src_sequence_exam3.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Users/axiom/Documents/drive/College/Second Year/Spring Semester/Data Structures Lab/Labs/Lab_6/src/sequence_exam3.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_sequence_exam3.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_sequence_exam3.cpp$(DependSuffix): src/sequence_exam3.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_sequence_exam3.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_sequence_exam3.cpp$(DependSuffix) -MM src/sequence_exam3.cpp

$(IntermediateDirectory)/src_sequence_exam3.cpp$(PreprocessSuffix): src/sequence_exam3.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_sequence_exam3.cpp$(PreprocessSuffix) src/sequence_exam3.cpp

$(IntermediateDirectory)/src_sequence3.cpp$(ObjectSuffix): src/sequence3.cpp $(IntermediateDirectory)/src_sequence3.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Users/axiom/Documents/drive/College/Second Year/Spring Semester/Data Structures Lab/Labs/Lab_6/src/sequence3.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_sequence3.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_sequence3.cpp$(DependSuffix): src/sequence3.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_sequence3.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_sequence3.cpp$(DependSuffix) -MM src/sequence3.cpp

$(IntermediateDirectory)/src_sequence3.cpp$(PreprocessSuffix): src/sequence3.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_sequence3.cpp$(PreprocessSuffix) src/sequence3.cpp

$(IntermediateDirectory)/src_node1.cpp$(ObjectSuffix): src/node1.cpp $(IntermediateDirectory)/src_node1.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/Users/axiom/Documents/drive/College/Second Year/Spring Semester/Data Structures Lab/Labs/Lab_6/src/node1.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_node1.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_node1.cpp$(DependSuffix): src/node1.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_node1.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_node1.cpp$(DependSuffix) -MM src/node1.cpp

$(IntermediateDirectory)/src_node1.cpp$(PreprocessSuffix): src/node1.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_node1.cpp$(PreprocessSuffix) src/node1.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


