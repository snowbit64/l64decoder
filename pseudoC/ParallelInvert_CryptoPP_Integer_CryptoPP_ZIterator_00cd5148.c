// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ParallelInvert<CryptoPP::Integer,CryptoPP::ZIterator>
// Entry Point: 00cd5148
// Size: 784 bytes
// Signature: void __cdecl ParallelInvert<CryptoPP::Integer,CryptoPP::ZIterator>(AbstractRing * param_1, ZIterator param_2, ZIterator param_3)


/* void CryptoPP::ParallelInvert<CryptoPP::Integer,
   CryptoPP::ZIterator>(CryptoPP::AbstractRing<CryptoPP::Integer> const&, CryptoPP::ZIterator,
   CryptoPP::ZIterator) */

void CryptoPP::ParallelInvert<CryptoPP::Integer,CryptoPP::ZIterator>
               (AbstractRing *param_1,ZIterator param_2,ZIterator param_3)

{
  long lVar1;
  long lVar2;
  Integer *pIVar3;
  ulong uVar4;
  Integer *pIVar5;
  Integer *pIVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  undefined8 *local_88;
  
  uVar7 = (ulong)param_2;
  lVar2 = tpidr_el0;
  uVar15 = ((long)(param_3 - uVar7) >> 4) * 0x38e38e39;
  lVar8 = *(long *)(lVar2 + 0x28);
  iVar14 = (int)uVar15;
  if (iVar14 != 0) {
    if (iVar14 == 1) {
      pIVar3 = (Integer *)(**(code **)(*(long *)param_1 + 0x88))(param_1,(Integer *)(uVar7 + 0x60));
      Integer::operator=((Integer *)(uVar7 + 0x60),pIVar3);
    }
    else {
      uVar12 = (ulong)iVar14;
      uVar10 = uVar12 + 1;
      if (uVar10 < 2) {
        puVar11 = (undefined8 *)0x0;
        local_88 = (undefined8 *)0x0;
      }
      else {
        if (0xaaaaaaaaaaaaaab < uVar10) {
                    /* try { // try from 00cd544c to 00cd5453 has its CatchHandler @ 00cd5458 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        lVar1 = (uVar10 >> 1) + (uVar10 & 0xfffffffffffffffe);
        uVar10 = lVar1 * 0x10;
                    /* try { // try from 00cd522c to 00cd5233 has its CatchHandler @ 00cd5458 */
        puVar11 = (undefined8 *)operator_new(uVar10);
        lVar9 = 0;
        local_88 = puVar11 + lVar1 * 2;
        do {
                    /* try { // try from 00cd524c to 00cd5253 has its CatchHandler @ 00cd5478 */
          Integer::Integer((Integer *)((long)puVar11 + lVar9));
          lVar9 = lVar9 + 0x30;
        } while (uVar10 - lVar9 != 0);
      }
      uVar4 = (uVar15 << 0x20) >> 0x21;
      uVar10 = uVar7;
      if (uVar4 != 0) {
        uVar13 = 0;
        do {
                    /* try { // try from 00cd529c to 00cd52af has its CatchHandler @ 00cd5490 */
          pIVar3 = (Integer *)
                   (**(code **)(*(long *)param_1 + 0x80))(param_1,uVar10 + 0x60,uVar10 + 0xf0);
          Integer::operator=((Integer *)(puVar11 + uVar13 * 6),pIVar3);
          uVar13 = (ulong)((int)uVar13 + 1);
          uVar10 = uVar10 + 0x120;
        } while (uVar13 < uVar12 >> 1);
      }
      uVar12 = uVar12 >> 1;
      if ((uVar15 & 1) != 0) {
                    /* try { // try from 00cd52d0 to 00cd52fb has its CatchHandler @ 00cd5460 */
        Integer::operator=((Integer *)(puVar11 + uVar12 * 6),(Integer *)(uVar10 + 0x60));
      }
      ParallelInvert<CryptoPP::Integer,std::__ndk1::__wrap_iter<CryptoPP::Integer*>>
                (param_1,(__wrap_iter)puVar11,(__wrap_iter)local_88);
      if (uVar4 != 0) {
        uVar10 = 0;
        do {
                    /* try { // try from 00cd5358 to 00cd5383 has its CatchHandler @ 00cd5494 */
          uVar4 = Integer::operator!((Integer *)(puVar11 + uVar10 * 6));
          pIVar3 = (Integer *)(uVar7 + 0x60);
          if ((uVar4 & 1) == 0) {
            pIVar5 = (Integer *)(uVar7 + 0xf0);
                    /* try { // try from 00cd53b0 to 00cd53bb has its CatchHandler @ 00cd546c */
            Integer::swap(pIVar3,pIVar5);
                    /* try { // try from 00cd53cc to 00cd53e3 has its CatchHandler @ 00cd5494 */
            pIVar6 = (Integer *)
                     (**(code **)(*(long *)param_1 + 0x80))(param_1,pIVar3,puVar11 + uVar10 * 6);
            Integer::operator=(pIVar3,pIVar6);
                    /* try { // try from 00cd53f4 to 00cd5403 has its CatchHandler @ 00cd5464 */
            pIVar3 = (Integer *)
                     (**(code **)(*(long *)param_1 + 0x80))(param_1,pIVar5,puVar11 + uVar10 * 6);
                    /* try { // try from 00cd5404 to 00cd540b has its CatchHandler @ 00cd5470 */
            Integer::operator=(pIVar5,pIVar3);
          }
          else {
            pIVar5 = (Integer *)(**(code **)(*(long *)param_1 + 0x88))(param_1,pIVar3);
            Integer::operator=(pIVar3,pIVar5);
                    /* try { // try from 00cd5390 to 00cd539f has its CatchHandler @ 00cd5468 */
            pIVar3 = (Integer *)
                     (**(code **)(*(long *)param_1 + 0x88))(param_1,(Integer *)(uVar7 + 0xf0));
                    /* try { // try from 00cd53a0 to 00cd53a7 has its CatchHandler @ 00cd5474 */
            Integer::operator=((Integer *)(uVar7 + 0xf0),pIVar3);
          }
          uVar10 = (ulong)((int)uVar10 + 1);
          uVar7 = uVar7 + 0x120;
        } while (uVar10 < uVar12);
      }
      if ((uVar15 & 1) != 0) {
        Integer::operator=((Integer *)(uVar7 + 0x60),(Integer *)(puVar11 + uVar12 * 6));
      }
      if (puVar11 != (undefined8 *)0x0) {
        while (local_88 != puVar11) {
          local_88 = local_88 + -6;
          (**(code **)*local_88)(local_88);
        }
        operator_delete(puVar11);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


