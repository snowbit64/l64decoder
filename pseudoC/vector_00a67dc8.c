// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 00a67dc8
// Size: 220 bytes
// Signature: undefined __thiscall vector(vector<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>> * this, vector * param_1)


/* std::__ndk1::vector<FoliageSystemDesc::State, std::__ndk1::allocator<FoliageSystemDesc::State>
   >::vector(std::__ndk1::vector<FoliageSystemDesc::State,
   std::__ndk1::allocator<FoliageSystemDesc::State> > const&) */

void __thiscall
std::__ndk1::vector<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>>::
vector(vector<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>> *this,
      vector *param_1)

{
  ulong uVar1;
  long lVar2;
  State *pSStack_48;
  State *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  uVar1 = *(long *)(param_1 + 8) - *(long *)param_1;
  if (uVar1 != 0) {
    if (0x276276276276276 < (ulong)(((long)uVar1 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                    /* try { // try from 00a67e98 to 00a67e9f has its CatchHandler @ 00a67eb4 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 00a67e34 to 00a67e37 has its CatchHandler @ 00a67eb4 */
    pSStack_48 = (State *)operator_new(uVar1);
    *(State **)this = pSStack_48;
    *(State **)(this + 8) = pSStack_48;
    local_40 = pSStack_48 + ((long)uVar1 >> 3) * 8;
    *(State **)(this + 0x10) = local_40;
                    /* try { // try from 00a67e64 to 00a67e6b has its CatchHandler @ 00a67ea4 */
    allocator_traits<std::__ndk1::allocator<FoliageSystemDesc::State>>::
    __construct_range_forward<FoliageSystemDesc::State*,FoliageSystemDesc::State*>
              ((allocator *)(this + 0x10),*(State **)param_1,*(State **)(param_1 + 8),&pSStack_48);
    *(State **)(this + 8) = pSStack_48;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


