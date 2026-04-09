// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setContent
// Entry Point: 00af1ae8
// Size: 232 bytes
// Signature: undefined __thiscall setContent(GiantsAdPlacement * this, uchar * param_1, uint param_2)


/* GiantsAdPlacement::setContent(unsigned char*, unsigned int) */

void __thiscall GiantsAdPlacement::setContent(GiantsAdPlacement *this,uchar *param_1,uint param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  ulong local_48;
  ulong uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pvVar2 = *(void **)(this + 0x20);
  if (((ulong)param_1 | (ulong)pvVar2) == 0) goto LAB_00af1ba8;
  this[0x3c] = (GiantsAdPlacement)0x0;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  *(uchar **)(this + 0x20) = param_1;
  *(uint *)(this + 0x28) = param_2;
  if ((param_1 == (uchar *)0x0) || (param_2 == 0)) {
    puVar3 = *(undefined8 **)(this + 0x40);
    *(undefined8 *)(this + 0x34) = 0;
    *(undefined8 *)(this + 0x2c) = 0;
    if (puVar3 == (undefined8 *)0x0) goto LAB_00af1ba8;
  }
  else {
    this[0x3c] = (GiantsAdPlacement)0x1;
    if (*(long *)(this + 0x40) == 0) goto LAB_00af1ba8;
    MD5Hash::getMD5Hash(param_1,param_2,(uchar *)&local_48);
    if ((local_48 ^ *(ulong *)(this + 0x2c) | uStack_40 ^ *(ulong *)(this + 0x34)) == 0)
    goto LAB_00af1ba8;
    puVar3 = *(undefined8 **)(this + 0x40);
    *(ulong *)(this + 0x34) = uStack_40;
    *(ulong *)(this + 0x2c) = local_48;
  }
  (**(code **)*puVar3)();
LAB_00af1ba8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


