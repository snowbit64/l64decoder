// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementIndexMask
// Entry Point: 009cb6f0
// Size: 292 bytes
// Signature: undefined __thiscall ProceduralPlacementIndexMask(ProceduralPlacementIndexMask * this, ProceduralPlacementIndexMask * param_1)


/* ProceduralPlacementIndexMask::ProceduralPlacementIndexMask(ProceduralPlacementIndexMask const&)
    */

void __thiscall
ProceduralPlacementIndexMask::ProceduralPlacementIndexMask
          (ProceduralPlacementIndexMask *this,ProceduralPlacementIndexMask *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  undefined **ppuVar6;
  void *pvVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  ProceduralPlacementMask::ProceduralPlacementMask
            ((ProceduralPlacementMask *)this,(ProceduralPlacementMask *)param_1);
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  this[0x69] = (ProceduralPlacementIndexMask)0x1;
  ppuVar6 = &PTR__ProceduralPlacementIndexMask_00fe20a8;
  *(undefined ***)this = &PTR__ProceduralPlacementIndexMask_00fe20a8;
  if (this != param_1) {
                    /* try { // try from 009cb740 to 009cb747 has its CatchHandler @ 009cb814 */
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    assign<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>
              ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)(this + 0xd0),*(basic_string **)(param_1 + 0xd0),
               *(basic_string **)(param_1 + 0xd8));
    ppuVar6 = *(undefined ***)this;
  }
                    /* try { // try from 009cb750 to 009cb77b has its CatchHandler @ 009cb818 */
  iVar3 = (*(code *)ppuVar6[8])(this);
  iVar4 = (**(code **)(*(long *)this + 0x48))(this);
  uVar1 = iVar4 * iVar3;
  uVar15 = (ulong)uVar1;
  uVar14 = uVar15 * 4;
  pvVar5 = operator_new__(uVar14);
  *(void **)(this + 200) = pvVar5;
  if (uVar1 != 0) {
    pvVar7 = *(void **)(param_1 + 200);
    if ((uVar1 < 8) ||
       ((pvVar5 < (void *)((long)pvVar7 + uVar14) && (pvVar7 < (void *)((long)pvVar5 + uVar14))))) {
      uVar14 = 0;
    }
    else {
      uVar14 = uVar15 & 0xfffffff8;
      puVar11 = (undefined8 *)((long)pvVar7 + 0x10);
      puVar12 = (undefined8 *)((long)pvVar5 + 0x10);
      uVar13 = uVar14;
      do {
        puVar2 = puVar11 + -1;
        uVar16 = puVar11[-2];
        uVar18 = puVar11[1];
        uVar17 = *puVar11;
        puVar11 = puVar11 + 4;
        uVar13 = uVar13 - 8;
        puVar12[-1] = *puVar2;
        puVar12[-2] = uVar16;
        puVar12[1] = uVar18;
        *puVar12 = uVar17;
        puVar12 = puVar12 + 4;
      } while (uVar13 != 0);
      if (uVar14 == uVar15) {
        return;
      }
    }
    lVar9 = uVar15 - uVar14;
    puVar8 = (undefined4 *)((long)pvVar7 + uVar14 * 4);
    puVar10 = (undefined4 *)((long)pvVar5 + uVar14 * 4);
    do {
      lVar9 = lVar9 + -1;
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    } while (lVar9 != 0);
  }
  return;
}


