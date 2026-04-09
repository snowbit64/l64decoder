// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007aa388
// Entry Point: 007aa388
// Size: 312 bytes
// Signature: undefined FUN_007aa388(void)


void FUN_007aa388(GsShape *param_1,char **param_2)

{
  GsMaterial **ppGVar1;
  long *this;
  ulong uVar2;
  GsShape *this_00;
  MaterialManager *pMVar3;
  GsMaterial *pGVar4;
  char *pcVar5;
  
  pcVar5 = *param_2;
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x21) = 1;
  this = (long *)operator_new(0x198);
                    /* try { // try from 007aa3e4 to 007aa3eb has its CatchHandler @ 007aa4cc */
  FillPlaneGeometry::FillPlaneGeometry
            ((FillPlaneGeometry *)this,pcVar5,*(float *)(param_2 + 2),*(float *)(param_2 + 4),
             *(float *)(param_2 + 6),*(float *)(param_2 + 8),*(float *)(param_2 + 10),
             *(float *)(param_2 + 0xc),*(float *)(param_2 + 0xe),*(bool *)(param_2 + 0x10),
             *(bool *)(param_2 + 0x12));
  uVar2 = FillPlaneGeometry::init((FillPlaneGeometry *)this,param_1);
  if ((uVar2 & 1) != 0) {
    this_00 = (GsShape *)operator_new(0x200);
                    /* try { // try from 007aa408 to 007aa413 has its CatchHandler @ 007aa4c0 */
    GsShape::GsShape(this_00,pcVar5,(Geometry *)this);
    GsShape::setShapeFlags
              (this_00,*(uint *)(this_00 + 400) & 0xfffffc00 |
                       *(uint *)(this_00 + 400) & 0xff | (*(uint *)(param_1 + 400) >> 8 & 3) << 8);
    ppGVar1 = (GsMaterial **)(param_1 + 0x178);
    if (*(short *)(param_1 + 0x196) != 1) {
      ppGVar1 = *(GsMaterial ***)(param_1 + 0x178);
    }
    if (*ppGVar1 == (GsMaterial *)0x0) {
      pMVar3 = (MaterialManager *)MaterialManager::getInstance();
      pGVar4 = (GsMaterial *)MaterialManager::getDefaultMaterial(pMVar3,1);
      GsShape::addMaterial(this_00,pGVar4);
      pMVar3 = (MaterialManager *)MaterialManager::getInstance();
      MaterialManager::releaseMaterial(pMVar3,pGVar4);
    }
    else {
      GsShape::addMaterial(this_00,*ppGVar1);
    }
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(this_00 + 0x18);
    *(undefined4 *)(param_2 + 0x21) = 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007aa470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*this + 8))(this);
  return;
}


