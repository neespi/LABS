# DO NOT EDIT
# This makefile makes sure all linkable targets are
# up-to-date with anything they link to
default:
	echo "Do not invoke directly"

# Rules to remove targets that are older than anything to which they
# link.  This forces Xcode to relink the targets from scratch.  It
# does not seem to check these dependencies itself.
PostBuild.LAB_6.Debug:
/Users/polina/Desktop/Practice/LAB_6/LAB_6/Debug/LAB_6:
	/bin/rm -f /Users/polina/Desktop/Practice/LAB_6/LAB_6/Debug/LAB_6


PostBuild.LAB_6.Release:
/Users/polina/Desktop/Practice/LAB_6/LAB_6/Release/LAB_6:
	/bin/rm -f /Users/polina/Desktop/Practice/LAB_6/LAB_6/Release/LAB_6


PostBuild.LAB_6.MinSizeRel:
/Users/polina/Desktop/Practice/LAB_6/LAB_6/MinSizeRel/LAB_6:
	/bin/rm -f /Users/polina/Desktop/Practice/LAB_6/LAB_6/MinSizeRel/LAB_6


PostBuild.LAB_6.RelWithDebInfo:
/Users/polina/Desktop/Practice/LAB_6/LAB_6/RelWithDebInfo/LAB_6:
	/bin/rm -f /Users/polina/Desktop/Practice/LAB_6/LAB_6/RelWithDebInfo/LAB_6




# For each target create a dummy ruleso the target does not have to exist
