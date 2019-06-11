# DO NOT EDIT
# This makefile makes sure all linkable targets are
# up-to-date with anything they link to
default:
	echo "Do not invoke directly"

# Rules to remove targets that are older than anything to which they
# link.  This forces Xcode to relink the targets from scratch.  It
# does not seem to check these dependencies itself.
PostBuild.LAB_2.Debug:
/Users/polina/Desktop/Practice/LAB_2/LAB_2/Debug/LAB_2:
	/bin/rm -f /Users/polina/Desktop/Practice/LAB_2/LAB_2/Debug/LAB_2


PostBuild.LAB_2.Release:
/Users/polina/Desktop/Practice/LAB_2/LAB_2/Release/LAB_2:
	/bin/rm -f /Users/polina/Desktop/Practice/LAB_2/LAB_2/Release/LAB_2


PostBuild.LAB_2.MinSizeRel:
/Users/polina/Desktop/Practice/LAB_2/LAB_2/MinSizeRel/LAB_2:
	/bin/rm -f /Users/polina/Desktop/Practice/LAB_2/LAB_2/MinSizeRel/LAB_2


PostBuild.LAB_2.RelWithDebInfo:
/Users/polina/Desktop/Practice/LAB_2/LAB_2/RelWithDebInfo/LAB_2:
	/bin/rm -f /Users/polina/Desktop/Practice/LAB_2/LAB_2/RelWithDebInfo/LAB_2




# For each target create a dummy ruleso the target does not have to exist
