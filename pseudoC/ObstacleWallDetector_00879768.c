// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ObstacleWallDetector
// Entry Point: 00879768
// Size: 852 bytes
// Signature: undefined __thiscall ~ObstacleWallDetector(ObstacleWallDetector * this)


/* ObstacleWallDetector::~ObstacleWallDetector() */

void __thiscall ObstacleWallDetector::~ObstacleWallDetector(ObstacleWallDetector *this)

{
  Bt2ScenegraphPhysicsContext *this_00;
  
                    /* try { // try from 00879778 to 0087977f has its CatchHandler @ 00879abc */
  ScenegraphPhysicsContextManager::getInstance();
  this_00 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
                    /* try { // try from 00879788 to 008797eb has its CatchHandler @ 00879ac4 */
  Bt2ScenegraphPhysicsContext::cancelRaycastShapes(this_00,(IRaycastReport *)(this + 0x240));
  Bt2ScenegraphPhysicsContext::cancelRaycastShapes(this_00,(IRaycastReport *)(this + 0x250));
  Bt2ScenegraphPhysicsContext::cancelRaycastShapes(this_00,(IRaycastReport *)(this + 0x260));
  Bt2ScenegraphPhysicsContext::cancelRaycastShapes(this_00,(IRaycastReport *)(this + 0x270));
  Bt2ScenegraphPhysicsContext::cancelRaycastShapes(this_00,(IRaycastReport *)(this + 0x280));
  Bt2ScenegraphPhysicsContext::cancelRaycastShapes(this_00,(IRaycastReport *)(this + 0x290));
  Bt2ScenegraphPhysicsContext::cancelRaycastShapes(this_00,(IRaycastReport *)(this + 0x2a0));
  Bt2ScenegraphPhysicsContext::cancelRaycastShapes(this_00,(IRaycastReport *)(this + 0x2b0));
  Bt2ScenegraphPhysicsContext::cancelRaycastShapes(this_00,(IRaycastReport *)(this + 0x2c0));
  if (this[0x3ac] != (ObstacleWallDetector)0x0) {
                    /* try { // try from 008797f8 to 0087985f has its CatchHandler @ 00879ac0 */
    Bt2ScenegraphPhysicsContext::cancelRaycastShapes(this_00,(IRaycastReport *)(this + 0x2d0));
    Bt2ScenegraphPhysicsContext::cancelRaycastShapes(this_00,(IRaycastReport *)(this + 0x2e0));
    Bt2ScenegraphPhysicsContext::cancelRaycastShapes(this_00,(IRaycastReport *)(this + 0x2f0));
    Bt2ScenegraphPhysicsContext::cancelRaycastShapes(this_00,(IRaycastReport *)(this + 0x300));
    Bt2ScenegraphPhysicsContext::cancelRaycastShapes(this_00,(IRaycastReport *)(this + 0x310));
    Bt2ScenegraphPhysicsContext::cancelRaycastShapes(this_00,(IRaycastReport *)(this + 800));
    Bt2ScenegraphPhysicsContext::cancelRaycastShapes(this_00,(IRaycastReport *)(this + 0x330));
    Bt2ScenegraphPhysicsContext::cancelRaycastShapes(this_00,(IRaycastReport *)(this + 0x340));
    Bt2ScenegraphPhysicsContext::cancelRaycastShapes(this_00,(IRaycastReport *)(this + 0x350));
  }
  *(undefined ***)(this + 0x350) = &PTR__RayReportWater_00fdc348;
  *(undefined4 *)(this + 0x359) = 1;
  do {
  } while (((byte)this[0x358] & 1) != 0);
  *(undefined ***)(this + 0x340) = &PTR__RayReportWater_00fdc348;
  *(undefined4 *)(this + 0x349) = 1;
  do {
  } while (((byte)this[0x348] & 1) != 0);
  *(undefined ***)(this + 0x330) = &PTR__RayReportWater_00fdc348;
  *(undefined4 *)(this + 0x339) = 1;
  do {
  } while (((byte)this[0x338] & 1) != 0);
  *(undefined ***)(this + 800) = &PTR__RayReportWater_00fdc348;
  *(undefined4 *)(this + 0x329) = 1;
  do {
  } while (((byte)this[0x328] & 1) != 0);
  *(undefined ***)(this + 0x310) = &PTR__RayReportWater_00fdc348;
  *(undefined4 *)(this + 0x319) = 1;
  do {
  } while (((byte)this[0x318] & 1) != 0);
  *(undefined ***)(this + 0x300) = &PTR__RayReportWater_00fdc348;
  *(undefined4 *)(this + 0x309) = 1;
  do {
  } while (((byte)this[0x308] & 1) != 0);
  *(undefined ***)(this + 0x2f0) = &PTR__RayReportWater_00fdc348;
  *(undefined4 *)(this + 0x2f9) = 1;
  do {
  } while (((byte)this[0x2f8] & 1) != 0);
  *(undefined ***)(this + 0x2e0) = &PTR__RayReportWater_00fdc348;
  *(undefined4 *)(this + 0x2e9) = 1;
  do {
  } while (((byte)this[0x2e8] & 1) != 0);
  *(undefined ***)(this + 0x2d0) = &PTR__RayReportWater_00fdc348;
  *(undefined4 *)(this + 0x2d9) = 1;
  do {
  } while (((byte)this[0x2d8] & 1) != 0);
  *(undefined ***)(this + 0x2c0) = &PTR__RayReportWall_00fdc310;
  *(undefined4 *)(this + 0x2c9) = 1;
  do {
  } while (((byte)this[0x2c8] & 1) != 0);
  *(undefined ***)(this + 0x2b0) = &PTR__RayReportWall_00fdc310;
  *(undefined4 *)(this + 0x2b9) = 1;
  do {
  } while (((byte)this[0x2b8] & 1) != 0);
  *(undefined ***)(this + 0x2a0) = &PTR__RayReportWall_00fdc310;
  *(undefined4 *)(this + 0x2a9) = 1;
  do {
  } while (((byte)this[0x2a8] & 1) != 0);
  *(undefined ***)(this + 0x290) = &PTR__RayReportWall_00fdc310;
  *(undefined4 *)(this + 0x299) = 1;
  do {
  } while (((byte)this[0x298] & 1) != 0);
  *(undefined ***)(this + 0x280) = &PTR__RayReportWall_00fdc310;
  *(undefined4 *)(this + 0x289) = 1;
  do {
  } while (((byte)this[0x288] & 1) != 0);
  *(undefined ***)(this + 0x270) = &PTR__RayReportWall_00fdc310;
  *(undefined4 *)(this + 0x279) = 1;
  do {
  } while (((byte)this[0x278] & 1) != 0);
  *(undefined ***)(this + 0x260) = &PTR__RayReportWall_00fdc310;
  *(undefined4 *)(this + 0x269) = 1;
  do {
  } while (((byte)this[0x268] & 1) != 0);
  *(undefined ***)(this + 0x250) = &PTR__RayReportWall_00fdc310;
  *(undefined4 *)(this + 0x259) = 1;
  do {
  } while (((byte)this[600] & 1) != 0);
  *(undefined ***)(this + 0x240) = &PTR__RayReportWall_00fdc310;
  *(undefined4 *)(this + 0x249) = 1;
  do {
  } while (((byte)this[0x248] & 1) != 0);
  return;
}


