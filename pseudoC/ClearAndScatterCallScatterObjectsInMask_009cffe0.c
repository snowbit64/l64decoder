// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ClearAndScatterCallScatterObjectsInMask
// Entry Point: 009cffe0
// Size: 240 bytes
// Signature: undefined __thiscall ClearAndScatterCallScatterObjectsInMask(ClearAndScatterCallScatterObjectsInMask * this, basic_string * param_1, uint param_2, int * param_3, bool param_4, PPParentObjects * param_5, PPMask * param_6, basic_string * param_7)


/* ProceduralPlacementManager::ClearAndScatterCallScatterObjectsInMask::ClearAndScatterCallScatterObjectsInMask(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned int, int*, bool,
   ProceduralPlacementScriptBinding::PPParentObjects*, ProceduralPlacementScriptBinding::PPMask*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
ProceduralPlacementManager::ClearAndScatterCallScatterObjectsInMask::
ClearAndScatterCallScatterObjectsInMask
          (ClearAndScatterCallScatterObjectsInMask *this,basic_string *param_1,uint param_2,
          int *param_3,bool param_4,PPParentObjects *param_5,PPMask *param_6,basic_string *param_7)

{
  uint uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  *(undefined ***)this = &PTR_apply_00fe22e8;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 8));
  this[0x30] = (ClearAndScatterCallScatterObjectsInMask)param_4;
  *(uint *)(this + 0x20) = param_2;
  *(PPParentObjects **)(this + 0x38) = param_5;
  *(PPMask **)(this + 0x40) = param_6;
                    /* try { // try from 009d0040 to 009d004b has its CatchHandler @ 009d0100 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x48));
  uVar1 = *(uint *)(this + 0x20);
  uVar8 = (ulong)uVar1;
                    /* try { // try from 009d0054 to 009d0057 has its CatchHandler @ 009d00d0 */
  pvVar3 = operator_new__(uVar8 << 2);
  *(void **)(this + 0x28) = pvVar3;
  if (uVar1 != 0) {
    if (uVar1 < 8) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar8 & 0xfffffff8;
      puVar5 = (undefined8 *)(param_3 + 4);
      puVar6 = (undefined8 *)((long)pvVar3 + 0x10);
      uVar7 = uVar4;
      do {
        puVar2 = puVar5 + -1;
        uVar9 = puVar5[-2];
        uVar11 = puVar5[1];
        uVar10 = *puVar5;
        puVar5 = puVar5 + 4;
        uVar7 = uVar7 - 8;
        puVar6[-1] = *puVar2;
        puVar6[-2] = uVar9;
        puVar6[1] = uVar11;
        *puVar6 = uVar10;
        puVar6 = puVar6 + 4;
      } while (uVar7 != 0);
      if (uVar4 == uVar8) {
        return;
      }
    }
    do {
      uVar7 = uVar4 + 1;
      *(int *)((long)pvVar3 + uVar4 * 4) = param_3[uVar4];
      uVar4 = uVar7;
    } while (uVar7 < uVar8);
  }
  return;
}


