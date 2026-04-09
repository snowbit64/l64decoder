// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VehicleNavigationGridAdapter
// Entry Point: 00740b9c
// Size: 420 bytes
// Signature: undefined __thiscall VehicleNavigationGridAdapter(VehicleNavigationGridAdapter * this, VehicleNavigationMap * param_1, float param_2, ushort param_3, Vector2 * param_4, float param_5, float param_6, float param_7)


/* VehicleNavigationGridAdapter::VehicleNavigationGridAdapter(VehicleNavigationMap const&, float,
   unsigned short, Vector2 const&, float, float, float) */

void __thiscall
VehicleNavigationGridAdapter::VehicleNavigationGridAdapter
          (VehicleNavigationGridAdapter *this,VehicleNavigationMap *param_1,float param_2,
          ushort param_3,Vector2 *param_4,float param_5,float param_6,float param_7)

{
  short sVar1;
  int iVar2;
  void *__s;
  uint uVar3;
  undefined8 uVar4;
  float fVar5;
  
  fVar5 = *(float *)(param_1 + 0x10);
  *(VehicleNavigationMap **)this = param_1;
  uVar3 = (uint)((fVar5 + fVar5) / param_2);
  sVar1 = (short)uVar3;
  *(short *)(this + 8) = sVar1;
  *(ushort *)(this + 10) = sVar1 * param_3;
  uVar4 = *(undefined8 *)param_4;
  *(float *)(this + 0x1c) = param_5;
  *(float *)(this + 0x24) = 1.0 / param_2;
  *(float *)(this + 0x28) = (float)(ulong)param_3 / param_2;
  *(float *)(this + 0x3c) = param_7;
  *(undefined8 *)(this + 0xc) = uVar4;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(void **)(this + 0x40) = (void *)0x0;
  *(float *)(this + 0x34) = (float)(ulong)uVar3 * param_2 * 0.5;
  *(float *)(this + 0x38) = param_6;
  *(float *)(this + 0x2c) = param_2;
  *(float *)(this + 0x30) = param_2 / (float)(ulong)param_3;
  __s = operator_new(0x800);
  *(void **)(this + 0x40) = __s;
  *(long *)(this + 0x50) = (long)__s + 0x800;
  memset(__s,0,0x800);
  *(long *)(this + 0x48) = (long)__s + 0x800;
  __memset_chk(__s,0xff,0x800,0x800);
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x60) = 0xff;
  *(undefined8 *)(this + 0x58) = 0;
  if (((DAT_01052ca0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_01052ca0), iVar2 != 0)) {
    DAT_01052c98 = *(float *)(this + 0x30) * 1.306563 * 0.5;
    __cxa_guard_release(&DAT_01052ca0);
  }
  *(ulong *)(this + 0x14) =
       CONCAT44(DAT_01052c98 + (float)((ulong)*(undefined8 *)(this + 0xc) >> 0x20),
                DAT_01052c98 + (float)*(undefined8 *)(this + 0xc));
  fVar5 = (float)NEON_fmadd(*(undefined4 *)param_4,*(undefined4 *)param_4,
                            (ABS(param_5) + *(float *)(param_4 + 4)) *
                            (ABS(param_5) + *(float *)(param_4 + 4)));
  *(float *)(this + 0x20) = SQRT(fVar5);
  memset(this + 0x80,0xff,0x10000);
                    /* try { // try from 00740cdc to 00740ce3 has its CatchHandler @ 00740d40 */
  createTeleportList();
  return;
}


