# DO NOT EDIT
# This makefile makes sure all linkable targets are
# up-to-date with anything they link to
default:
	echo "Do not invoke directly"

# Rules to remove targets that are older than anything to which they
# link.  This forces Xcode to relink the targets from scratch.  It
# does not seem to check these dependencies itself.
PostBuild.LAB_3_Do.Debug:
/Users/polina/Desktop/Practice/LAB_3_Do/LAB_3_Do/Debug/LAB_3_Do:
	/bin/rm -f /Users/polina/Desktop/Practice/LAB_3_Do/LAB_3_Do/Debug/LAB_3_Do


PostBuild.LAB_3_Do.Release:
/Users/polina/Desktop/Practice/LAB_3_Do/LAB_3_Do/Release/LAB_3_Do:
	/bin/rm -f /Users/polina/Desktop/Practice/LAB_3_Do/LAB_3_Do/Release/LAB_3_Do


PostBuild.LAB_3_Do.MinSizeRel:
/Users/polina/Desktop/Practice/LAB_3_Do/LAB_3_Do/MinSizeRel/LAB_3_Do:
	/bin/rm -f /Users/polina/Desktop/Practice/LAB_3_Do/LAB_3_Do/MinSizeRel/LAB_3_Do


PostBuild.LAB_3_Do.RelWithDebInfo:
/Users/polina/Desktop/Practice/LAB_3_Do/LAB_3_Do/RelWithDebInfo/LAB_3_Do:
	/bin/rm -f /Users/polina/Desktop/Practice/LAB_3_Do/LAB_3_Do/RelWithDebInfo/LAB_3_Do




# For each target create a dummy ruleso the target does not have to exist
