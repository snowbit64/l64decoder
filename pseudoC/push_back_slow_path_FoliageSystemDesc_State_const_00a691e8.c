// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<FoliageSystemDesc::State_const&>
// Entry Point: 00a691e8
// Size: 472 bytes
// Signature: void __thiscall __push_back_slow_path<FoliageSystemDesc::State_const&>(vector<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>> * this, State * param_1)


/* void std::__ndk1::vector<FoliageSystemDesc::State,
   std::__ndk1::allocator<FoliageSystemDesc::State>
   >::__push_back_slow_path<FoliageSystemDesc::State const&>(FoliageSystemDesc::State const&) */

void __thiscall
std::__ndk1::vector<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>>::
__push_back_slow_path<FoliageSystemDesc::State_const&>
          (vector<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>> *this,
          State *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  basic_string *pbVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  basic_string *local_78;
  basic_string *pbStack_70;
  void *local_68;
  long *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar5 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar5 * 0x4ec4ec4ec4ec4ec5 + 1;
  if (0x276276276276276 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  plVar9 = (long *)(this + 0x10);
  lVar6 = *plVar9 - *(long *)this >> 3;
  uVar8 = lVar6 * -0x6276276276276276;
  if (uVar1 <= uVar8) {
    uVar1 = uVar8;
  }
  if (0x13b13b13b13b13a < (ulong)(lVar6 * 0x4ec4ec4ec4ec4ec5)) {
    uVar1 = 0x276276276276276;
  }
  local_60 = plVar9;
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0x276276276276276 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 * 0x68);
  }
  pbVar10 = (basic_string *)((long)pvVar4 + lVar5 * 8);
  local_68 = (void *)((long)pvVar4 + uVar1 * 0x68);
  local_78 = pbVar10;
  pbStack_70 = pbVar10;
                    /* try { // try from 00a692c8 to 00a692d3 has its CatchHandler @ 00a69400 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(pbVar10);
                    /* try { // try from 00a692e4 to 00a692eb has its CatchHandler @ 00a693e0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)((long)pvVar4 + lVar5 * 8 + 0x18));
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  uVar12 = *(undefined8 *)(param_1 + 0x44);
  uVar11 = *(undefined8 *)(param_1 + 0x3c);
  *(undefined8 *)((long)pvVar4 + lVar5 * 8 + 0x38) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)((long)pvVar4 + lVar5 * 8 + 0x30) = uVar7;
  *(undefined8 *)((long)pvVar4 + lVar5 * 8 + 0x44) = uVar12;
  *(undefined8 *)((long)pvVar4 + lVar5 * 8 + 0x3c) = uVar11;
                    /* try { // try from 00a6930c to 00a6930f has its CatchHandler @ 00a693c0 */
  vector<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>>::vector
            ((vector<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>> *)
             ((long)pvVar4 + lVar5 * 8 + 0x50),(vector *)(param_1 + 0x50));
  pbStack_70 = pbVar10 + 0x1a;
                    /* try { // try from 00a69324 to 00a6932b has its CatchHandler @ 00a69400 */
  allocator_traits<std::__ndk1::allocator<FoliageSystemDesc::State>>::
  __construct_backward_with_exception_guarantees<FoliageSystemDesc::State*>
            ((allocator *)plVar9,*(State **)this,*(State **)(this + 8),(State **)&local_78);
  pbVar10 = *(basic_string **)this;
  pbVar2 = *(basic_string **)(this + 8);
  uVar7 = *(undefined8 *)(this + 0x10);
  *(basic_string **)(this + 8) = pbStack_70;
  *(basic_string **)this = local_78;
  *(void **)(this + 0x10) = local_68;
  local_78 = pbVar10;
  pbStack_70 = pbVar2;
  local_68 = (void *)uVar7;
  while (pbStack_70 != pbVar10) {
    pbStack_70 = pbStack_70 + -0x1a;
    FoliageSystemDesc::State::~State((State *)pbStack_70);
  }
  if (pbVar10 != (basic_string *)0x0) {
    operator_delete(pbVar10);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


