// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator++
// Entry Point: 00cfc924
// Size: 284 bytes
// Signature: undefined __thiscall operator++(Integer * this)


/* CryptoPP::Integer::TEMPNAMEPLACEHOLDERVALUE() */

Integer * __thiscall CryptoPP::Integer::operator++(Integer *this)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (*(int *)(this + 0x28) == 1) {
    uVar4 = *(ulong *)(this + 0x18);
    piVar1 = *(int **)(this + 0x20);
    iVar2 = *piVar1;
    *piVar1 = iVar2 + -1;
    if ((iVar2 == 0) && (1 < uVar4)) {
      uVar6 = 1;
      do {
        uVar5 = (ulong)((int)uVar6 + 1);
        iVar2 = piVar1[uVar6];
        piVar1[uVar6] = iVar2 + -1;
        uVar6 = uVar5;
      } while ((iVar2 == 0 && uVar5 <= uVar4) && (iVar2 != 0 || uVar4 != uVar5));
    }
    do {
      if (uVar4 == 0) goto LAB_00cfca20;
      uVar6 = uVar4 - 1;
      lVar3 = uVar4 - 1;
      uVar4 = uVar6;
    } while (piVar1[lVar3] == 0);
    if ((int)uVar6 == -1) {
LAB_00cfca20:
      operator=(this,(Integer *)&DAT_02120810);
      return this;
    }
  }
  else {
    uVar4 = *(ulong *)(this + 0x18);
    piVar1 = *(int **)(this + 0x20);
    iVar2 = *piVar1;
    *piVar1 = iVar2 + 1;
    if (iVar2 == -1) {
      if (1 < uVar4) {
        uVar6 = 1;
        do {
          iVar2 = piVar1[uVar6];
          piVar1[uVar6] = iVar2 + 1;
          if (iVar2 != -1) {
            return this;
          }
          uVar6 = (ulong)((int)uVar6 + 1);
        } while (uVar6 < uVar4);
      }
      SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
                ((SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> *)
                 (this + 8),uVar4 << 1);
      *(undefined4 *)(*(long *)(this + 0x20) + (*(ulong *)(this + 0x18) & 0x7ffffffffffffffe) * 2) =
           1;
      return this;
    }
  }
  return this;
}


