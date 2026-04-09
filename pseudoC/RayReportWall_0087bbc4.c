// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~RayReportWall
// Entry Point: 0087bbc4
// Size: 44 bytes
// Signature: undefined __thiscall ~RayReportWall(RayReportWall * this)


/* ObstacleWallDetector::RayReportWall::~RayReportWall() */

void __thiscall ObstacleWallDetector::RayReportWall::~RayReportWall(RayReportWall *this)

{
  *(undefined ***)this = &PTR__RayReportWall_00fdc310;
  *(undefined4 *)(this + 9) = 1;
  do {
  } while (((byte)this[8] & 1) != 0);
  operator_delete(this);
  return;
}


