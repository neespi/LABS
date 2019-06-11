# DO NOT EDIT
# This makefile makes sure all linkable targets are
# up-to-date with anything they link to
default:
	echo "Do not invoke directly"

# Rules to remove targets that are older than anything to which they
# link.  This forces Xcode to relink the targets from scratch.  It
# does not seem to check these dependencies itself.
PostBuild.LAB_4.Debug:
/Users/polina/Desktop/Practice/LAB_4/LAB_4/Debug/LAB_4:
	/bin/rm -f /Users/polina/Desktop/Practice/LAB_4/LAB_4/Debug/LAB_4


PostBuild.LAB_4.Release:
/Users/polina/Desktop/Practice/LAB_4/LAB_4/Release/LAB_4:
	/bin/rm -f /Users/polina/Desktop/Practice/LAB_4/LAB_4/Release/LAB_4


PostBuild.LAB_4.MinSizeRel:
/Users/polina/Desktop/Practice/LAB_4/LAB_4/MinSizeRel/LAB_4:
	/bin/rm -f /Users/polina/Desktop/Practice/LAB_4/LAB_4/MinSizeRel/LAB_4


PostBuild.LAB_4.RelWithDebInfo:
/Users/polina/Desktop/Practice/LAB_4/LAB_4/RelWithDebInfo/LAB_4:
	/bin/rm -f /Users/polina/Desktop/Practice/LAB_4/LAB_4/RelWithDebInfo/LAB_4




# For each target create a dummy ruleso the target does not have to exist
