# DO NOT EDIT
# This makefile makes sure all linkable targets are
# up-to-date with anything they link to
default:
	echo "Do not invoke directly"

# Rules to remove targets that are older than anything to which they
# link.  This forces Xcode to relink the targets from scratch.  It
# does not seem to check these dependencies itself.
PostBuild.LAB_3_Do_While.Debug:
/Users/polina/Desktop/Practice/LAB_3_Do_While/LAB_3_Do_While/Debug/LAB_3_Do_While:
	/bin/rm -f /Users/polina/Desktop/Practice/LAB_3_Do_While/LAB_3_Do_While/Debug/LAB_3_Do_While


PostBuild.LAB_3_Do_While.Release:
/Users/polina/Desktop/Practice/LAB_3_Do_While/LAB_3_Do_While/Release/LAB_3_Do_While:
	/bin/rm -f /Users/polina/Desktop/Practice/LAB_3_Do_While/LAB_3_Do_While/Release/LAB_3_Do_While


PostBuild.LAB_3_Do_While.MinSizeRel:
/Users/polina/Desktop/Practice/LAB_3_Do_While/LAB_3_Do_While/MinSizeRel/LAB_3_Do_While:
	/bin/rm -f /Users/polina/Desktop/Practice/LAB_3_Do_While/LAB_3_Do_While/MinSizeRel/LAB_3_Do_While


PostBuild.LAB_3_Do_While.RelWithDebInfo:
/Users/polina/Desktop/Practice/LAB_3_Do_While/LAB_3_Do_While/RelWithDebInfo/LAB_3_Do_While:
	/bin/rm -f /Users/polina/Desktop/Practice/LAB_3_Do_While/LAB_3_Do_While/RelWithDebInfo/LAB_3_Do_While




# For each target create a dummy ruleso the target does not have to exist
