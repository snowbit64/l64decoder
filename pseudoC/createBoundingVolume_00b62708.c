// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createBoundingVolume
// Entry Point: 00b62708
// Size: 332 bytes
// Signature: undefined __cdecl createBoundingVolume(float * param_1, uint param_2, uint param_3)


/* BoundingVolumeFactory::createBoundingVolume(float const*, unsigned int, unsigned int) */

BoundingSphere *
BoundingVolumeFactory::createBoundingVolume(float *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  long *****ppppplVar3;
  float fVar4;
  BoundingSphere *this;
  long ****pppplVar5;
  long *****ppppplVar6;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_c4;
  undefined8 uStack_c0;
  undefined8 *local_80;
  float local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  long *****local_68;
  long *****local_60;
  long *****local_58;
  long local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_2 == 0) {
    this = (BoundingSphere *)operator_new(0x20);
    local_150 = 0;
    local_148 = 0;
                    /* try { // try from 00b62814 to 00b6281f has its CatchHandler @ 00b62854 */
    BoundingSphere::BoundingSphere(this,(Vector3 *)&local_150,0.0);
  }
  else {
    local_68 = (long *****)&local_60;
    local_80 = (undefined8 *)&local_c4;
    uVar1 = 0xc;
    if (param_3 != 0) {
      uVar1 = param_3;
    }
    local_74 = 0;
    uStack_70 = 0;
    local_50 = 0;
    uStack_c0 = 0;
    local_c4 = 0;
    local_78 = -1.0;
                    /* try { // try from 00b62778 to 00b62783 has its CatchHandler @ 00b6287c */
    local_60 = local_68;
    local_58 = local_68;
    pivotMB((BoundingVolumeFactory *)&local_150,(uchar *)param_1,
            (uchar *)((long)param_1 + (ulong)(uVar1 * param_2)),uVar1);
    fVar4 = local_78;
    local_160 = *local_80;
    local_158 = *(undefined4 *)(local_80 + 1);
                    /* try { // try from 00b6279c to 00b627a3 has its CatchHandler @ 00b62878 */
    this = (BoundingSphere *)operator_new(0x20);
                    /* try { // try from 00b627ac to 00b627b3 has its CatchHandler @ 00b62868 */
    BoundingSphere::BoundingSphere(this,(Vector3 *)&local_160,SQRT(fVar4));
    if (local_50 != 0) {
      pppplVar5 = *local_58;
      pppplVar5[1] = (long ***)local_60[1];
      *local_60[1] = (long ***)pppplVar5;
      local_50 = 0;
      ppppplVar3 = local_58;
      while ((long ******)ppppplVar3 != &local_60) {
        ppppplVar6 = (long *****)ppppplVar3[1];
        operator_delete(ppppplVar3);
        ppppplVar3 = ppppplVar6;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


