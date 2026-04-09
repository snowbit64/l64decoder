// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compare
// Entry Point: 00f9f8e8
// Size: 292 bytes
// Signature: undefined __thiscall compare(Rational128 * this, Rational128 * param_1)


/* btConvexHullInternal::Rational128::compare(btConvexHullInternal::Rational128 const&) const */

void __thiscall btConvexHullInternal::Rational128::compare(Rational128 *this,Rational128 *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = *(int *)(this + 0x20);
  if (iVar2 != *(int *)(param_1 + 0x20)) {
    iVar2 = iVar2 - *(int *)(param_1 + 0x20);
    goto LAB_00f9f9a4;
  }
  if (iVar2 == 0) {
    iVar2 = 0;
    goto LAB_00f9f9a4;
  }
  if (this[0x24] != (Rational128)0x0) {
    iVar2 = compare(param_1,*(long *)this * (long)iVar2);
    iVar2 = -iVar2;
    goto LAB_00f9f9a4;
  }
  DMul<btConvexHullInternal::Int128,unsigned_long>::mul
            (*(undefined8 *)this,*(undefined8 *)(this + 8),*(undefined8 *)(param_1 + 0x10),
             *(undefined8 *)(param_1 + 0x18),&local_48,&local_58);
  DMul<btConvexHullInternal::Int128,unsigned_long>::mul
            (*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18),*(undefined8 *)param_1,
             *(undefined8 *)(param_1 + 8),&local_68,&local_78);
  if (local_70 <= local_50) {
    if (local_70 <= local_50 && local_50 != local_70) {
LAB_00f9f998:
      uVar3 = 1;
    }
    else {
      if (local_58 < local_78) goto LAB_00f9f98c;
      if (local_78 < local_58) goto LAB_00f9f998;
      if (local_40 < local_60) goto LAB_00f9f98c;
      if (local_60 < local_40) goto LAB_00f9f998;
      if (local_48 < local_68) goto LAB_00f9f98c;
      uVar3 = (uint)(local_68 < local_48);
    }
  }
  else {
LAB_00f9f98c:
    uVar3 = 0xffffffff;
  }
  iVar2 = *(int *)(this + 0x20) * uVar3;
LAB_00f9f9a4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


