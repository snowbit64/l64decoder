// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPreferredPenetrationDirection
// Entry Point: 00f57cc4
// Size: 68 bytes
// Signature: undefined __thiscall getPreferredPenetrationDirection(btBoxShape * this, int param_1, btVector3 * param_2)


/* btBoxShape::getPreferredPenetrationDirection(int, btVector3&) const */

void __thiscall
btBoxShape::getPreferredPenetrationDirection(btBoxShape *this,int param_1,btVector3 *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((uint)param_1 < 6) {
    uVar1 = -(ulong)((uint)param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)param_1 << 2;
    *(undefined4 *)(param_2 + 0xc) = 0;
    uVar2 = *(undefined4 *)(&DAT_005712e0 + uVar1);
    uVar3 = *(undefined4 *)(&DAT_005712f8 + uVar1);
    *(undefined4 *)param_2 = *(undefined4 *)(&DAT_005712c8 + uVar1);
    *(undefined4 *)(param_2 + 4) = uVar2;
    *(undefined4 *)(param_2 + 8) = uVar3;
  }
  return;
}


