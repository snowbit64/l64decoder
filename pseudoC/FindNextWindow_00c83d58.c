// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FindNextWindow
// Entry Point: 00c83d58
// Size: 292 bytes
// Signature: undefined FindNextWindow(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::WindowSlider::FindNextWindow() */

void CryptoPP::WindowSlider::FindNextWindow(void)

{
  Integer IVar1;
  int iVar2;
  undefined4 uVar3;
  Integer *in_x0;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  iVar2 = Integer::WordCount();
  IVar1 = in_x0[0x6e];
  uVar6 = *(uint *)(in_x0 + 0x60);
  in_x0[0x6e] = (Integer)0x0;
  if (IVar1 != (Integer)0x0) {
    uVar6 = 0;
  }
  uVar5 = (ulong)uVar6;
  uVar4 = Integer::GetBit(in_x0,uVar5);
  if ((uVar4 & 1) == 0) {
    if (uVar6 <= (uint)(iVar2 * 0x20)) {
      uVar6 = iVar2 * 0x20;
    }
    uVar4 = uVar5;
    do {
      if (uVar6 == uVar4) {
        in_x0[0x6f] = (Integer)0x1;
        return;
      }
      uVar4 = uVar4 + 1;
      uVar5 = Integer::GetBit(in_x0,uVar4);
    } while ((uVar5 & 1) == 0);
    uVar5 = uVar4 & 0xffffffff;
    uVar6 = (uint)uVar4;
  }
  Integer::operator>>=(in_x0,uVar5);
  *(uint *)(in_x0 + 100) = *(int *)(in_x0 + 100) + uVar6;
  uVar3 = Integer::Modulo(in_x0,1 << (ulong)(*(uint *)(in_x0 + 0x60) & 0x1f));
  *(undefined4 *)(in_x0 + 0x68) = uVar3;
  if ((in_x0[0x6c] != (Integer)0x0) &&
     (uVar4 = Integer::GetBit(in_x0,(ulong)*(uint *)(in_x0 + 0x60)), (uVar4 & 1) != 0)) {
    in_x0[0x6d] = (Integer)0x1;
    *(int *)(in_x0 + 0x68) = (1 << (ulong)(*(uint *)(in_x0 + 0x60) & 0x1f)) - *(int *)(in_x0 + 0x68)
    ;
    Integer::operator+=(in_x0,in_x0 + 0x30);
    return;
  }
  in_x0[0x6d] = (Integer)0x0;
  return;
}


