# DO NOT EDIT
# This makefile makes sure all linkable targets are
# up-to-date with anything they link to
default:
	echo "Do not invoke directly"

# Rules to remove targets that are older than anything to which they
# link.  This forces Xcode to relink the targets from scratch.  It
# does not seem to check these dependencies itself.
PostBuild.LAB_7.Debug:
/Users/polina/Desktop/Practice/LAB_7/LAB_7/Debug/LAB_7:
	/bin/rm -f /Users/polina/Desktop/Practice/LAB_7/LAB_7/Debug/LAB_7


PostBuild.LAB_7.Release:
/Users/polina/Desktop/Practice/LAB_7/LAB_7/Release/LAB_7:
	/bin/rm -f /Users/polina/Desktop/Practice/LAB_7/LAB_7/Release/LAB_7


PostBuild.LAB_7.MinSizeRel:
/Users/polina/Desktop/Practice/LAB_7/LAB_7/MinSizeRel/LAB_7:
	/bin/rm -f /Users/polina/Desktop/Practice/LAB_7/LAB_7/MinSizeRel/LAB_7


PostBuild.LAB_7.RelWithDebInfo:
/Users/polina/Desktop/Practice/LAB_7/LAB_7/RelWithDebInfo/LAB_7:
	/bin/rm -f /Users/polina/Desktop/Practice/LAB_7/LAB_7/RelWithDebInfo/LAB_7




# For each target create a dummy ruleso the target does not have to exist
