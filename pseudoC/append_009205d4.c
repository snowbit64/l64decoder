// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 009205d4
// Size: 724 bytes
// Signature: undefined __thiscall __append(vector<I3DSave::TerrainSaveDetailLayerTask,std::__ndk1::allocator<I3DSave::TerrainSaveDetailLayerTask>> * this, ulong param_1)


/* std::__ndk1::vector<I3DSave::TerrainSaveDetailLayerTask,
   std::__ndk1::allocator<I3DSave::TerrainSaveDetailLayerTask> >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<I3DSave::TerrainSaveDetailLayerTask,std::__ndk1::allocator<I3DSave::TerrainSaveDetailLayerTask>>
::__append(vector<I3DSave::TerrainSaveDetailLayerTask,std::__ndk1::allocator<I3DSave::TerrainSaveDetailLayerTask>>
           *this,ulong param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *local_88;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  puVar10 = *(undefined8 **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)puVar10 >> 4) * -0x3333333333333333) < param_1) {
    lVar7 = (long)puVar10 - *(long *)this >> 4;
    uVar1 = lVar7 * -0x3333333333333333 + param_1;
    if (0x333333333333333 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = *(long *)(this + 0x10) - *(long *)this >> 4;
    uVar8 = lVar5 * -0x6666666666666666;
    if (uVar1 <= uVar8) {
      uVar1 = uVar8;
    }
    if (0x199999999999998 < (ulong)(lVar5 * -0x3333333333333333)) {
      uVar1 = 0x333333333333333;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (0x333333333333333 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar1 * 0x50);
    }
    local_88 = (undefined8 *)((long)pvVar3 + lVar7 * 0x10);
    puVar11 = local_88 + param_1 * 10;
    puVar10 = local_88;
    do {
      *puVar10 = &PTR__Task_00fde908;
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[2] = 0;
                    /* try { // try from 00920768 to 00920773 has its CatchHandler @ 009208f0 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)(puVar10 + 2));
      puVar9 = puVar10 + 10;
      *puVar10 = &PTR__TerrainSaveDetailLayerTask_00fdfbf0;
      puVar10[7] = 0;
      puVar10[8] = 0;
      puVar10[6] = 0;
      puVar10 = puVar9;
    } while (puVar9 != puVar11);
    puVar10 = *(undefined8 **)this;
    puVar9 = puVar10;
    if (*(undefined8 **)(this + 8) != puVar10) {
      puVar9 = *(undefined8 **)(this + 8) + -4;
      do {
        local_88[-10] = &PTR__Task_00fde908;
        *(undefined *)(local_88 + -9) = *(undefined *)(puVar9 + -5);
                    /* try { // try from 009207cc to 009207cf has its CatchHandler @ 009208c8 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)(local_88 + -8));
        local_88[-10] = &PTR__TerrainSaveDetailLayerTask_00fdfbf0;
        *(undefined4 *)(local_88 + -5) = *(undefined4 *)(puVar9 + -1);
                    /* try { // try from 009207e0 to 009207e7 has its CatchHandler @ 009208a8 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)(local_88 + -4));
        local_88[-1] = puVar9[3];
        local_88 = local_88 + -10;
        puVar6 = puVar9 + -6;
        puVar9 = puVar9 + -10;
      } while (puVar6 != puVar10);
      puVar10 = *(undefined8 **)this;
      puVar9 = *(undefined8 **)(this + 8);
    }
    *(undefined8 **)this = local_88;
    *(undefined8 **)(this + 8) = puVar11;
    *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar1 * 0x50);
    while (puVar9 != puVar10) {
      puVar9 = puVar9 + -10;
      (**(code **)*puVar9)(puVar9);
    }
    if (puVar10 != (undefined8 *)0x0) {
      operator_delete(puVar10);
    }
  }
  else {
    puVar11 = puVar10;
    if (param_1 != 0) {
      puVar11 = puVar10 + param_1 * 10;
      do {
        *puVar10 = &PTR__Task_00fde908;
        puVar10[3] = 0;
        puVar10[4] = 0;
        puVar10[2] = 0;
                    /* try { // try from 009206e0 to 009206eb has its CatchHandler @ 009208d0 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((char *)(puVar10 + 2));
        puVar9 = puVar10 + 10;
        *puVar10 = &PTR__TerrainSaveDetailLayerTask_00fdfbf0;
        puVar10[7] = 0;
        puVar10[8] = 0;
        puVar10[6] = 0;
        puVar10 = puVar9;
      } while (puVar9 != puVar11);
    }
    *(undefined8 **)(this + 8) = puVar11;
  }
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


