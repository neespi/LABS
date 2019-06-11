# DO NOT EDIT
# This makefile makes sure all linkable targets are
# up-to-date with anything they link to
default:
	echo "Do not invoke directly"

# Rules to remove targets that are older than anything to which they
# link.  This forces Xcode to relink the targets from scratch.  It
# does not seem to check these dependencies itself.
PostBuild.LAB_5.Debug:
/Users/polina/Desktop/Practice/LAB_5/LAB_5/Debug/LAB_5:
	/bin/rm -f /Users/polina/Desktop/Practice/LAB_5/LAB_5/Debug/LAB_5


PostBuild.LAB_5.Release:
/Users/polina/Desktop/Practice/LAB_5/LAB_5/Release/LAB_5:
	/bin/rm -f /Users/polina/Desktop/Practice/LAB_5/LAB_5/Release/LAB_5


PostBuild.LAB_5.MinSizeRel:
/Users/polina/Desktop/Practice/LAB_5/LAB_5/MinSizeRel/LAB_5:
	/bin/rm -f /Users/polina/Desktop/Practice/LAB_5/LAB_5/MinSizeRel/LAB_5


PostBuild.LAB_5.RelWithDebInfo:
/Users/polina/Desktop/Practice/LAB_5/LAB_5/RelWithDebInfo/LAB_5:
	/bin/rm -f /Users/polina/Desktop/Practice/LAB_5/LAB_5/RelWithDebInfo/LAB_5




# For each target create a dummy ruleso the target does not have to exist
