// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: assign<CryptoPP::ECPPoint*>
// Entry Point: 00cbb214
// Size: 720 bytes
// Signature: type __thiscall assign<CryptoPP::ECPPoint*>(vector<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>> * this, ECPPoint * param_1, ECPPoint * param_2)


/* std::__ndk1::enable_if<__is_cpp17_forward_iterator<CryptoPP::ECPPoint*>::value&&is_constructible<CryptoPP::ECPPoint,
   std::__ndk1::iterator_traits<CryptoPP::ECPPoint*>::reference>::value, void>::type
   std::__ndk1::vector<CryptoPP::ECPPoint, std::__ndk1::allocator<CryptoPP::ECPPoint>
   >::assign<CryptoPP::ECPPoint*>(CryptoPP::ECPPoint*, CryptoPP::ECPPoint*) */

type __thiscall
std::__ndk1::vector<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>>::
assign<CryptoPP::ECPPoint*>
          (vector<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>> *this,
          ECPPoint *param_1,ECPPoint *param_2)

{
  long lVar1;
  ECPPoint *pEVar2;
  ECPPoint *pEVar3;
  type tVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  
  lVar6 = *(long *)(this + 0x10);
  puVar10 = *(undefined8 **)this;
  lVar9 = lVar6 - (long)puVar10 >> 4;
  uVar11 = ((long)param_2 - (long)param_1 >> 4) * 0x6db6db6db6db6db7;
  if (uVar11 < (ulong)(lVar9 * 0x6db6db6db6db6db7) || uVar11 + lVar9 * -0x6db6db6db6db6db7 == 0) {
    lVar6 = *(long *)(this + 8) - (long)puVar10 >> 4;
    pEVar2 = param_1 + (*(long *)(this + 8) - (long)puVar10);
    pEVar3 = pEVar2;
    if (uVar11 < (ulong)(lVar6 * 0x6db6db6db6db6db7) || uVar11 + lVar6 * -0x6db6db6db6db6db7 == 0) {
      pEVar3 = param_2;
    }
    puVar7 = (undefined8 *)this;
    if (pEVar3 != param_1) {
      lVar9 = 0;
      do {
        CryptoPP::Integer::operator=
                  ((Integer *)((long)puVar10 + lVar9 + 8),(Integer *)(param_1 + lVar9 + 8));
        puVar7 = (undefined8 *)
                 CryptoPP::Integer::operator=
                           ((Integer *)((long)puVar10 + lVar9 + 0x38),
                            (Integer *)(param_1 + lVar9 + 0x38));
        lVar1 = lVar9 + 0x70;
        *(vector<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>> *)
         ((long)puVar10 + lVar9 + 0x68) =
             *(vector<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>> *)
              (param_1 + lVar9 + 0x68);
        lVar9 = lVar1;
      } while (param_1 + lVar1 != pEVar3);
      puVar10 = (undefined8 *)((long)puVar10 + lVar1);
    }
    tVar4 = (type)puVar7;
    puVar5 = *(undefined8 **)(this + 8);
    if (uVar11 < (ulong)(lVar6 * 0x6db6db6db6db6db7) || uVar11 + lVar6 * -0x6db6db6db6db6db7 == 0) {
      while (puVar5 != puVar10) {
        puVar5 = puVar5 + -0xe;
        tVar4 = (**(code **)*puVar5)(puVar5);
      }
      *(undefined8 **)(this + 8) = puVar10;
      return tVar4;
    }
    if (pEVar3 != param_2) {
      lVar6 = 0;
      do {
        puVar10 = (undefined8 *)((long)puVar5 + lVar6);
        *puVar10 = &PTR__ECPPoint_00fe9fd8;
                    /* try { // try from 00cbb354 to 00cbb35b has its CatchHandler @ 00cbb530 */
        CryptoPP::Integer::Integer((Integer *)(puVar10 + 1),(Integer *)(pEVar2 + lVar6 + 8));
                    /* try { // try from 00cbb364 to 00cbb36b has its CatchHandler @ 00cbb4e4 */
        puVar7 = (undefined8 *)
                 CryptoPP::Integer::Integer
                           ((Integer *)(puVar10 + 7),(Integer *)(pEVar2 + lVar6 + 0x38));
        lVar9 = lVar6 + 0x70;
        *(ECPPoint *)(puVar10 + 0xd) = pEVar2[lVar6 + 0x68];
        lVar6 = lVar9;
      } while (pEVar2 + lVar9 != param_2);
      puVar5 = (undefined8 *)((long)puVar5 + lVar9);
    }
LAB_00cbb4b8:
    *(undefined8 **)(this + 8) = puVar5;
    return (type)puVar7;
  }
  if (puVar10 != (undefined8 *)0x0) {
    puVar7 = *(undefined8 **)(this + 8);
    puVar5 = puVar10;
    if (puVar7 != puVar10) {
      do {
        puVar7 = puVar7 + -0xe;
        (**(code **)*puVar7)(puVar7);
      } while (puVar7 != puVar10);
      puVar5 = *(undefined8 **)this;
    }
    *(undefined8 **)(this + 8) = puVar10;
    operator_delete(puVar5);
    lVar6 = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  if (uVar11 < 0x24924924924924a) {
    uVar8 = (lVar6 >> 4) * -0x2492492492492492;
    if (uVar11 <= uVar8) {
      uVar11 = uVar8;
    }
    if (0x124924924924923 < (ulong)((lVar6 >> 4) * 0x6db6db6db6db6db7)) {
      uVar11 = 0x249249249249249;
    }
    if (uVar11 < 0x24924924924924a) {
      puVar5 = (undefined8 *)operator_new(uVar11 * 0x70);
      *(undefined8 **)this = puVar5;
      *(undefined8 **)(this + 8) = puVar5;
      *(undefined8 **)(this + 0x10) = puVar5 + uVar11 * 0xe;
      puVar7 = puVar5;
      if (param_1 != param_2) {
        lVar6 = 0;
        do {
          puVar10 = (undefined8 *)((long)puVar5 + lVar6);
          *puVar10 = &PTR__ECPPoint_00fe9fd8;
                    /* try { // try from 00cbb480 to 00cbb487 has its CatchHandler @ 00cbb588 */
          CryptoPP::Integer::Integer((Integer *)(puVar10 + 1),(Integer *)(param_1 + lVar6 + 8));
                    /* try { // try from 00cbb490 to 00cbb497 has its CatchHandler @ 00cbb53c */
          puVar7 = (undefined8 *)
                   CryptoPP::Integer::Integer
                             ((Integer *)(puVar10 + 7),(Integer *)(param_1 + lVar6 + 0x38));
          lVar9 = lVar6 + 0x70;
          *(ECPPoint *)(puVar10 + 0xd) = param_1[lVar6 + 0x68];
          lVar6 = lVar9;
        } while (param_1 + lVar9 != param_2);
        puVar5 = (undefined8 *)((long)puVar5 + lVar9);
      }
      goto LAB_00cbb4b8;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__vector_base_common<true>::__throw_length_error();
}


