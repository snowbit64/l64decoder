// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GsTFunction
// Entry Point: 00c584d8
// Size: 608 bytes
// Signature: undefined __thiscall GsTFunction(GsTFunction * this, GsTFunction * param_1, SHC_PoolAllocator * param_2)


/* GsTFunction::GsTFunction(GsTFunction const&, SHC_PoolAllocator&) */

void __thiscall
GsTFunction::GsTFunction(GsTFunction *this,GsTFunction *param_1,SHC_PoolAllocator *param_2)

{
  GsTFunction *pGVar1;
  undefined4 uVar2;
  byte bVar3;
  GsTFunction GVar4;
  ulong uVar5;
  undefined8 uVar6;
  Parameter *this_00;
  long *plVar7;
  byte *pbVar8;
  Parameter *pPVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  
  pbVar11 = *(byte **)(param_1 + 8);
  bVar3 = *pbVar11;
  *(undefined ***)this = &PTR__GsTSymbol_00fee7e8;
  pbVar8 = *(byte **)(pbVar11 + 0x10);
  if ((bVar3 & 1) == 0) {
    pbVar8 = pbVar11 + 1;
  }
  uVar6 = SHC_String::New((char *)pbVar8,param_2);
  *(SHC_PoolAllocator **)(this + 0x38) = param_2;
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(long *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  lVar13 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x18) = uVar2;
  lVar12 = *(long *)(param_1 + 0x20);
  *(undefined ***)this = &PTR__GsTFunction_00fee7a0;
  *(undefined8 *)(this + 8) = uVar6;
  *(SHC_PoolAllocator **)(this + 0x88) = param_2;
  if (lVar13 == lVar12) {
LAB_00c586b0:
                    /* try { // try from 00c586b8 to 00c586fb has its CatchHandler @ 00c58738 */
    SHC_Type::copyType((SHC_Type *)(this + 0x40),(SHC_Type *)(param_1 + 0x40),param_2);
    pGVar1 = param_1 + 0x71;
    if (((byte)param_1[0x70] & 1) != 0) {
      pGVar1 = *(GsTFunction **)(param_1 + 0x80);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,SHC_STLPoolAllocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,SHC_STLPoolAllocator<char>> *)
           (this + 0x70),(char *)pGVar1);
    plVar7 = *(long **)(param_1 + 0x98);
    *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)(**(code **)(*plVar7 + 8))(plVar7,param_2);
    }
    GVar4 = param_1[0xc0];
    *(long **)(this + 0x98) = plVar7;
    uVar6 = *(undefined8 *)(param_1 + 200);
    this[0xc0] = GVar4;
    *(undefined8 *)(this + 200) = uVar6;
    return;
  }
  pPVar9 = (Parameter *)0x0;
  uVar15 = 0;
  do {
    uVar5 = ((long)pPVar9 - *(long *)(this + 0x20)) / 0x18;
    uVar10 = uVar5 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar10) {
                    /* try { // try from 00c58730 to 00c58737 has its CatchHandler @ 00c5873c */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar10 <= uVar5 * 2) {
      uVar10 = uVar5 * 2;
    }
    if (0x555555555555554 < uVar5) {
      uVar10 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar10 == 0) {
      lVar12 = 0;
    }
    else {
                    /* try { // try from 00c58608 to 00c58683 has its CatchHandler @ 00c58740 */
      lVar12 = SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(this + 0x38),uVar10 * 0x18);
    }
    lVar13 = *(long *)(this + 0x20);
    this_00 = (Parameter *)(lVar12 + uVar5 * 0x18);
    pPVar9 = this_00;
    for (lVar14 = *(long *)(this + 0x28); lVar14 != lVar13; lVar14 = lVar14 + -0x18) {
      uVar16 = *(undefined8 *)(lVar14 + -0x10);
      uVar6 = *(undefined8 *)(lVar14 + -0x18);
      *(undefined8 *)(pPVar9 + -8) = *(undefined8 *)(lVar14 + -8);
      *(undefined8 *)(pPVar9 + -0x10) = uVar16;
      *(undefined8 *)(pPVar9 + -0x18) = uVar6;
      pPVar9 = pPVar9 + -0x18;
    }
    *(Parameter **)(this + 0x20) = pPVar9;
    *(Parameter **)(this + 0x28) = this_00 + 0x18;
    *(ulong *)(this + 0x30) = lVar12 + uVar10 * 0x18;
    while( true ) {
      Parameter::copyParam(this_00,(Parameter *)(*(long *)(param_1 + 0x20) + uVar15 * 0x18),param_2)
      ;
      uVar15 = (ulong)((int)uVar15 + 1);
      uVar10 = (*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 3) * -0x5555555555555555;
      if (uVar10 < uVar15 || uVar10 - uVar15 == 0) goto LAB_00c586b0;
      this_00 = *(Parameter **)(this + 0x28);
      pPVar9 = *(Parameter **)(this + 0x30);
      if (this_00 == pPVar9) break;
      *(Parameter **)(this + 0x28) = this_00 + 0x18;
    }
  } while( true );
}


