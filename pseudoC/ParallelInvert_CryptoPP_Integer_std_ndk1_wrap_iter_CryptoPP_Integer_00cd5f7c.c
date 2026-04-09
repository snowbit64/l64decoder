// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ParallelInvert<CryptoPP::Integer,std::__ndk1::__wrap_iter<CryptoPP::Integer*>>
// Entry Point: 00cd5f7c
// Size: 776 bytes
// Signature: void __cdecl ParallelInvert<CryptoPP::Integer,std::__ndk1::__wrap_iter<CryptoPP::Integer*>>(AbstractRing * param_1, __wrap_iter param_2, __wrap_iter param_3)


/* void CryptoPP::ParallelInvert<CryptoPP::Integer, std::__ndk1::__wrap_iter<CryptoPP::Integer*>
   >(CryptoPP::AbstractRing<CryptoPP::Integer> const&, std::__ndk1::__wrap_iter<CryptoPP::Integer*>,
   std::__ndk1::__wrap_iter<CryptoPP::Integer*>) */

void CryptoPP::ParallelInvert<CryptoPP::Integer,std::__ndk1::__wrap_iter<CryptoPP::Integer*>>
               (AbstractRing *param_1,__wrap_iter param_2,__wrap_iter param_3)

{
  long lVar1;
  long lVar2;
  Integer *pIVar3;
  ulong uVar4;
  Integer *pIVar5;
  Integer *this;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  __wrap_iter _Var9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *local_88;
  
  this = (Integer *)(ulong)param_2;
  lVar2 = tpidr_el0;
  uVar11 = ((long)((ulong)param_3 - (long)this) >> 4) * -0x5555555555555555;
  lVar6 = *(long *)(lVar2 + 0x28);
  if (uVar11 == 0) goto LAB_00cd6248;
  if (uVar11 == 1) {
    pIVar3 = (Integer *)(**(code **)(*(long *)param_1 + 0x88))(param_1,this);
    Integer::operator=(this,pIVar3);
    goto LAB_00cd6248;
  }
  uVar10 = uVar11 + 1;
  if (uVar10 < 2) {
    puVar8 = (undefined8 *)0x0;
    local_88 = (undefined8 *)0x0;
    if (uVar11 < 2) goto LAB_00cd6028;
LAB_00cd60a0:
    uVar10 = 0;
    pIVar3 = this;
    do {
      pIVar5 = pIVar3;
                    /* try { // try from 00cd60c0 to 00cd60db has its CatchHandler @ 00cd62bc */
      pIVar3 = (Integer *)(**(code **)(*(long *)param_1 + 0x80))(param_1,pIVar5,pIVar5 + 0x30);
      Integer::operator=((Integer *)(puVar8 + uVar10 * 6),pIVar3);
      uVar10 = (ulong)((int)uVar10 + 1);
      pIVar3 = pIVar5 + 0x60;
    } while (uVar10 < uVar11 >> 1);
    _Var9 = (__wrap_iter)local_88;
    pIVar5 = pIVar5 + 0x60;
  }
  else {
    if (0xaaaaaaaaaaaaaab < uVar10) {
                    /* try { // try from 00cd6278 to 00cd627f has its CatchHandler @ 00cd6284 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar1 = (uVar10 >> 1) + (uVar10 & 0xfffffffffffffffe);
    uVar10 = lVar1 * 0x10;
                    /* try { // try from 00cd6050 to 00cd6057 has its CatchHandler @ 00cd6284 */
    puVar8 = (undefined8 *)operator_new(uVar10);
    lVar7 = 0;
    local_88 = puVar8 + lVar1 * 2;
    do {
                    /* try { // try from 00cd6070 to 00cd6077 has its CatchHandler @ 00cd62a4 */
      Integer::Integer((Integer *)((long)puVar8 + lVar7));
      lVar7 = lVar7 + 0x30;
    } while (uVar10 - lVar7 != 0);
    if (1 < uVar11) goto LAB_00cd60a0;
LAB_00cd6028:
    _Var9 = (__wrap_iter)local_88;
    pIVar5 = this;
  }
  if ((uVar11 & 1) != 0) {
                    /* try { // try from 00cd6100 to 00cd6133 has its CatchHandler @ 00cd628c */
    Integer::operator=((Integer *)(puVar8 + (uVar11 >> 1) * 6),pIVar5);
  }
  ParallelInvert<CryptoPP::Integer,std::__ndk1::__wrap_iter<CryptoPP::Integer*>>
            (param_1,(__wrap_iter)puVar8,_Var9);
  if (1 < uVar11) {
    uVar10 = 0;
    do {
                    /* try { // try from 00cd6188 to 00cd61af has its CatchHandler @ 00cd62c0 */
      uVar4 = Integer::operator!((Integer *)(puVar8 + uVar10 * 6));
      if ((uVar4 & 1) == 0) {
        pIVar3 = this + 0x30;
                    /* try { // try from 00cd61dc to 00cd61e7 has its CatchHandler @ 00cd6298 */
        Integer::swap(this,pIVar3);
                    /* try { // try from 00cd61f8 to 00cd620f has its CatchHandler @ 00cd62c0 */
        pIVar5 = (Integer *)(**(code **)(*(long *)param_1 + 0x80))(param_1,this,puVar8 + uVar10 * 6)
        ;
        Integer::operator=(this,pIVar5);
                    /* try { // try from 00cd6220 to 00cd622f has its CatchHandler @ 00cd6290 */
        pIVar5 = (Integer *)
                 (**(code **)(*(long *)param_1 + 0x80))(param_1,pIVar3,puVar8 + uVar10 * 6);
                    /* try { // try from 00cd6230 to 00cd6237 has its CatchHandler @ 00cd629c */
        Integer::operator=(pIVar3,pIVar5);
      }
      else {
        pIVar3 = (Integer *)(**(code **)(*(long *)param_1 + 0x88))(param_1,this);
        Integer::operator=(this,pIVar3);
                    /* try { // try from 00cd61bc to 00cd61cb has its CatchHandler @ 00cd6294 */
        pIVar3 = (Integer *)(**(code **)(*(long *)param_1 + 0x88))(param_1,this + 0x30);
                    /* try { // try from 00cd61cc to 00cd61d3 has its CatchHandler @ 00cd62a0 */
        Integer::operator=(this + 0x30,pIVar3);
      }
      uVar10 = (ulong)((int)uVar10 + 1);
      this = this + 0x60;
    } while (uVar10 < uVar11 >> 1);
  }
  if ((uVar11 & 1) != 0) {
    Integer::operator=(this,(Integer *)(puVar8 + (uVar11 >> 1) * 6));
  }
  if (puVar8 != (undefined8 *)0x0) {
    while (local_88 != puVar8) {
      local_88 = local_88 + -6;
      (**(code **)*local_88)(local_88);
    }
    operator_delete(puVar8);
  }
LAB_00cd6248:
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


