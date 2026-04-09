// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addParameter
// Entry Point: 00c1cf18
// Size: 520 bytes
// Signature: undefined __thiscall addParameter(GsTFunction * this, Parameter * param_1)


/* GsTFunction::addParameter(GsTFunction::Parameter&) */

void __thiscall GsTFunction::addParameter(GsTFunction *this,Parameter *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  byte *__src;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  GsTFunction *pGVar10;
  long lVar11;
  ulong *this_00;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar2 = *(undefined8 **)(this + 0x28);
  if (puVar2 == *(undefined8 **)(this + 0x30)) {
    uVar1 = ((long)puVar2 - *(long *)(this + 0x20)) / 0x18;
    uVar4 = uVar1 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar4 <= uVar1 * 2) {
      uVar4 = uVar1 * 2;
    }
    if (0x555555555555554 < uVar1) {
      uVar4 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar4 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(this + 0x38),uVar4 * 0x18);
    }
    uVar13 = *(undefined8 *)(param_1 + 8);
    uVar12 = *(undefined8 *)param_1;
    puVar9 = (undefined8 *)(lVar7 + uVar1 * 0x18);
    puVar9[2] = *(undefined8 *)(param_1 + 0x10);
    puVar9[1] = uVar13;
    *puVar9 = uVar12;
    lVar3 = *(long *)(this + 0x20);
    puVar2 = puVar9;
    for (lVar11 = *(long *)(this + 0x28); lVar11 != lVar3; lVar11 = lVar11 + -0x18) {
      uVar13 = *(undefined8 *)(lVar11 + -0x10);
      uVar12 = *(undefined8 *)(lVar11 + -0x18);
      puVar2[-1] = *(undefined8 *)(lVar11 + -8);
      puVar2[-2] = uVar13;
      puVar2[-3] = uVar12;
      puVar2 = puVar2 + -3;
    }
    *(undefined8 **)(this + 0x20) = puVar2;
    *(undefined8 **)(this + 0x28) = puVar9 + 3;
    *(ulong *)(this + 0x30) = lVar7 + uVar4 * 0x18;
  }
  else {
    uVar13 = *(undefined8 *)(param_1 + 8);
    uVar12 = *(undefined8 *)param_1;
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = uVar13;
    *puVar2 = uVar12;
    *(undefined8 **)(this + 0x28) = puVar2 + 3;
  }
  pbVar8 = (byte *)SHC_Type::getMangledName
                             (*(SHC_Type **)(param_1 + 0x10),*(SHC_PoolAllocator **)(this + 0x88));
  uVar4 = *(ulong *)(pbVar8 + 8);
  __src = *(byte **)(pbVar8 + 0x10);
  this_00 = (ulong *)(this + 0x70);
  bVar5 = *(byte *)this_00;
  if ((*pbVar8 & 1) == 0) {
    __src = pbVar8 + 1;
    uVar4 = (ulong)(*pbVar8 >> 1);
  }
  uVar1 = (ulong)(bVar5 >> 1);
  uVar6 = 0x16;
  if ((bVar5 & 1) != 0) {
    uVar1 = *(ulong *)(this + 0x78);
    uVar6 = (*this_00 & 0xfffffffffffffffe) - 1;
  }
  if (uVar4 <= uVar6 - uVar1) {
    if (uVar4 != 0) {
      pGVar10 = *(GsTFunction **)(this + 0x80);
      if ((bVar5 & 1) == 0) {
        pGVar10 = this + 0x71;
      }
      memcpy(pGVar10 + uVar1,__src,uVar4);
      lVar7 = uVar1 + uVar4;
      if (((byte)this[0x70] & 1) == 0) {
        *(char *)this_00 = (char)((int)lVar7 << 1);
      }
      else {
        *(long *)(this + 0x78) = lVar7;
      }
      pGVar10[lVar7] = (GsTFunction)0x0;
    }
    return;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,SHC_STLPoolAllocator<char>>::
  __grow_by_and_replace
            ((basic_string<char,std::__ndk1::char_traits<char>,SHC_STLPoolAllocator<char>> *)this_00
             ,uVar6,(uVar1 + uVar4) - uVar6,uVar1,uVar1,0,uVar4,(char *)__src);
  return;
}


