// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DensityMapUpdater
// Entry Point: 0085691c
// Size: 308 bytes
// Signature: undefined __thiscall DensityMapUpdater(DensityMapUpdater * this, char * param_1, DensityMapUpdaterDesc * param_2, bool param_3)


/* DensityMapUpdater::DensityMapUpdater(char const*, DensityMapUpdaterDesc const&, bool) */

void __thiscall
DensityMapUpdater::DensityMapUpdater
          (DensityMapUpdater *this,char *param_1,DensityMapUpdaterDesc *param_2,bool param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  UpdateManager *this_00;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  
  Entity::Entity((Entity *)this,param_1,param_3);
  this[0x28] = (DensityMapUpdater)0x0;
  *(undefined4 *)(this + 0x50) = 0;
  iVar2 = *(int *)(param_2 + 8);
  *(undefined ***)(this + 0x20) = &PTR__DensityMapUpdater_00fdbc78;
  *(int *)(this + 0x38) = iVar2;
  uVar5 = *(undefined8 *)param_2;
  *(undefined ***)this = &PTR__DensityMapUpdater_00fdbc50;
  uVar7 = *(undefined8 *)(param_2 + 0xc);
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x8000000000000;
  *(undefined8 *)(this + 0x30) = uVar5;
  *(undefined8 *)(this + 0x48) = uVar7;
  lVar4 = 0;
  do {
    lVar1 = lVar4 + 0xc;
    *(undefined4 *)(this + lVar4 + 0x54) = *(undefined4 *)(param_2 + 0x18);
    uVar3 = *(undefined4 *)(param_2 + 0x14);
    this[lVar4 + 0x5c] = (DensityMapUpdater)0x1;
    *(undefined4 *)(this + lVar4 + 0x58) = uVar3;
    lVar4 = lVar1;
  } while (lVar1 != 0x300);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(this + 0x1060) = 0;
  *(undefined4 *)(this + 0x354) = uVar3;
  *(undefined8 *)(this + 0x1070) = 0;
  *(undefined8 *)(this + 0x1068) = 0;
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  fVar6 = *(float *)(param_2 + 0x2c);
  *(undefined4 *)(this + 0x105c) = 0xffffffff;
  *(undefined8 *)(this + 0x3c) = uVar5;
  fVar8 = 0.0;
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  *(float *)(this + 0x1054) = fVar6;
  *(float *)(this + 0x1058) = fVar6;
  *(undefined4 *)(this + 0x44) = uVar3;
  if (0.0 < fVar6) {
    fVar8 = ((float)(ulong)(uint)(iVar2 * iVar2) / fVar6) * 1.33;
  }
  *(undefined4 *)(this + 0x1078) = 0xffffffff;
  *(float *)(this + 0x1064) = fVar8;
  *(undefined8 *)(this + 0x1080) = 0;
  *(undefined4 *)(this + 0x1088) = 0;
  this[0x108c] = (DensityMapUpdater)0x1;
                    /* try { // try from 00856a30 to 00856a3f has its CatchHandler @ 00856a50 */
  this_00 = (UpdateManager *)UpdateManager::getInstance();
  UpdateManager::addUpdateable(this_00,(Updateable *)(this + 0x20),false);
  return;
}


