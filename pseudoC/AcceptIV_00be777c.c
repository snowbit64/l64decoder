// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AcceptIV
// Entry Point: 00be777c
// Size: 356 bytes
// Signature: undefined __thiscall AcceptIV(AuthenticatedEncryption * this, ulonglong param_1)


/* AuthenticatedEncryption::AcceptIV(unsigned long long) */

void __thiscall AuthenticatedEncryption::AcceptIV(AuthenticatedEncryption *this,ulonglong param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar4 = (int)param_1 - *(int *)(this + 0x3a0);
  if ((int)uVar4 < 1) {
    uVar2 = -uVar4 >> 6;
    *(ulong *)(this + (ulong)uVar2 * 8 + 0x3b0) =
         *(ulong *)(this + (ulong)uVar2 * 8 + 0x3b0) | 1L << ((ulong)-uVar4 & 0x3f);
    return;
  }
  if (0x3ff < uVar4) {
    *(undefined8 *)(this + 0x428) = 0;
    *(undefined8 *)(this + 0x3b0) = 1;
    *(undefined8 *)(this + 0x3c0) = 0;
    *(undefined8 *)(this + 0x3b8) = 0;
    *(undefined8 *)(this + 0x3d0) = 0;
    *(undefined8 *)(this + 0x3c8) = 0;
    *(undefined8 *)(this + 0x3e0) = 0;
    *(undefined8 *)(this + 0x3d8) = 0;
    *(undefined8 *)(this + 0x3f0) = 0;
    *(undefined8 *)(this + 1000) = 0;
    *(undefined8 *)(this + 0x400) = 0;
    *(undefined8 *)(this + 0x3f8) = 0;
    *(undefined8 *)(this + 0x410) = 0;
    *(undefined8 *)(this + 0x408) = 0;
    *(undefined8 *)(this + 0x420) = 0;
    *(undefined8 *)(this + 0x418) = 0;
    *(ulonglong *)(this + 0x3a0) = param_1;
    return;
  }
  uVar3 = uVar4 >> 6;
  uVar2 = uVar4 & 0x3f;
  uVar5 = *(ulong *)(this + (ulong)(0xf - uVar3) * 8 + 0x3b0);
  if (uVar4 < 0x3c0) {
    lVar7 = 0;
    do {
      uVar6 = uVar5 << uVar2;
      uVar1 = lVar7 + 0xe;
      uVar5 = *(ulong *)(this + lVar7 * 8 + (long)(int)~uVar3 * 8 + 0x428);
      *(ulong *)(this + lVar7 * 8 + 0x428) = uVar5 >> ((ulong)(0x40 - uVar2) & 0x3f) | uVar6;
      lVar7 = lVar7 + -1;
    } while (uVar3 < uVar1);
    *(ulong *)(this + (ulong)uVar3 * 8 + 0x3b0) = uVar5 << uVar2;
    if (uVar4 < 0x40) goto LAB_00be78c4;
  }
  else {
    *(ulong *)(this + (ulong)uVar3 * 8 + 0x3b0) = uVar5 << uVar2;
  }
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  memset(this + 0x3b0,0,(ulong)(uVar3 << 3));
LAB_00be78c4:
  *(ulonglong *)(this + 0x3a0) = param_1;
  *(ulong *)(this + 0x3b0) = *(ulong *)(this + 0x3b0) | 1;
  return;
}


