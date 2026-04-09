// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pop
// Entry Point: 00744760
// Size: 352 bytes
// Signature: undefined pop(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PriorityQueue<Candidate, unsigned int, std::__ndk1::less<Candidate>,
   std::__ndk1::vector<std::__ndk1::pair<Candidate, unsigned int*>,
   std::__ndk1::allocator<std::__ndk1::pair<Candidate, unsigned int*> > > >::pop() */

void PriorityQueue<Candidate,unsigned_int,std::__ndk1::less<Candidate>,std::__ndk1::vector<std::__ndk1::pair<Candidate,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<Candidate,unsigned_int*>>>>
     ::pop(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  long *in_x0;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  lVar5 = *in_x0;
  lVar7 = in_x0[1];
  **(undefined4 **)(lVar5 + 8) = 0xffffffff;
  if ((ulong)(lVar7 - lVar5) < 0x11) goto LAB_007448b4;
  uVar3 = (int)((ulong)(lVar7 - lVar5) >> 4) - 1;
  uVar6 = (ulong)uVar3;
  if (uVar3 < 3) {
    uVar10 = 0;
    uVar9 = 1;
    uVar8 = 0;
    if (1 < uVar3) goto LAB_00744834;
  }
  else {
    uVar9 = 2;
    uVar8 = 0;
    do {
      uVar4 = uVar9 - (*(ushort *)(lVar5 + (ulong)(uVar9 - 1) * 0x10) <
                      *(ushort *)(lVar5 + (ulong)uVar9 * 0x10));
      uVar10 = (ulong)uVar4;
      puVar1 = (undefined8 *)(lVar5 + uVar10 * 0x10);
      if (*(ushort *)(lVar5 + uVar6 * 0x10) <= *(ushort *)puVar1) goto LAB_00744888;
      puVar2 = (undefined8 *)(lVar5 + (ulong)uVar8 * 0x10);
      uVar11 = *(undefined8 *)(lVar5 + uVar10 * 0x10 + 8);
      *puVar2 = *puVar1;
      lVar5 = *in_x0;
      puVar2[1] = uVar11;
      **(uint **)(lVar5 + (ulong)uVar8 * 0x10 + 8) = uVar8;
      uVar9 = uVar4 * 2 + 2;
      uVar8 = uVar4;
    } while (uVar9 < uVar3);
    uVar9 = uVar4 * 2 | 1;
    if (uVar9 < uVar3) {
LAB_00744834:
      puVar1 = (undefined8 *)(lVar5 + (ulong)uVar9 * 0x10);
      uVar8 = (uint)uVar10;
      if (*(ushort *)puVar1 < *(ushort *)(lVar5 + uVar6 * 0x10)) {
        puVar2 = (undefined8 *)(lVar5 + uVar10 * 0x10);
        lVar7 = lVar5 + (ulong)uVar9 * 0x10;
        *puVar2 = *puVar1;
        lVar5 = *in_x0;
        puVar2[1] = *(undefined8 *)(lVar7 + 8);
        **(uint **)(lVar5 + uVar10 * 0x10 + 8) = (uint)uVar10;
        uVar8 = uVar9;
      }
    }
  }
LAB_00744888:
  puVar1 = (undefined8 *)(lVar5 + uVar6 * 0x10);
  puVar2 = (undefined8 *)(lVar5 + (ulong)uVar8 * 0x10);
  uVar11 = puVar1[1];
  *puVar2 = *puVar1;
  lVar5 = *in_x0;
  lVar7 = in_x0[1];
  puVar2[1] = uVar11;
  **(uint **)(lVar5 + (ulong)uVar8 * 0x10 + 8) = uVar8;
LAB_007448b4:
  in_x0[1] = lVar7 + -0x10;
  return;
}


