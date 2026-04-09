// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 00a67924
// Size: 188 bytes
// Signature: undefined __thiscall vector(vector<FoliageSystemDesc::Lod,std::__ndk1::allocator<FoliageSystemDesc::Lod>> * this, vector * param_1)


/* std::__ndk1::vector<FoliageSystemDesc::Lod, std::__ndk1::allocator<FoliageSystemDesc::Lod>
   >::vector(std::__ndk1::vector<FoliageSystemDesc::Lod,
   std::__ndk1::allocator<FoliageSystemDesc::Lod> > const&) */

void __thiscall
std::__ndk1::vector<FoliageSystemDesc::Lod,std::__ndk1::allocator<FoliageSystemDesc::Lod>>::vector
          (vector<FoliageSystemDesc::Lod,std::__ndk1::allocator<FoliageSystemDesc::Lod>> *this,
          vector *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  uVar2 = *(long *)(param_1 + 8) - *(long *)param_1;
  if (uVar2 != 0) {
    if ((long)uVar2 < 0) {
                    /* try { // try from 00a679d8 to 00a679df has its CatchHandler @ 00a679e0 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 00a67958 to 00a6795f has its CatchHandler @ 00a679e0 */
    puVar3 = (undefined8 *)operator_new(uVar2);
    *(undefined8 **)this = puVar3;
    *(undefined8 **)(this + 8) = puVar3;
    *(undefined8 **)(this + 0x10) = puVar3 + ((long)uVar2 >> 6) * 8;
    puVar5 = *(undefined8 **)param_1;
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (puVar5 != puVar1) {
      do {
        puVar4 = puVar3;
        *puVar4 = *puVar5;
                    /* try { // try from 00a67990 to 00a6799b has its CatchHandler @ 00a679e8 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)(puVar4 + 1));
        puVar3 = (undefined8 *)((long)puVar5 + 0x35);
        uVar6 = *(undefined8 *)((long)puVar5 + 0x2d);
        uVar8 = puVar5[5];
        uVar7 = puVar5[4];
        puVar5 = puVar5 + 8;
        *(undefined8 *)((long)puVar4 + 0x35) = *puVar3;
        *(undefined8 *)((long)puVar4 + 0x2d) = uVar6;
        puVar4[5] = uVar8;
        puVar4[4] = uVar7;
        puVar3 = puVar4 + 8;
      } while (puVar5 != puVar1);
      puVar3 = puVar4 + 8;
    }
    *(undefined8 **)(this + 8) = puVar3;
  }
  return;
}


