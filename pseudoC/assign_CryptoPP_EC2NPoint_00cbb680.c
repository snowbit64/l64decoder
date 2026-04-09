// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: assign<CryptoPP::EC2NPoint*>
// Entry Point: 00cbb680
// Size: 688 bytes
// Signature: type __thiscall assign<CryptoPP::EC2NPoint*>(vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>> * this, EC2NPoint * param_1, EC2NPoint * param_2)


/* std::__ndk1::enable_if<__is_cpp17_forward_iterator<CryptoPP::EC2NPoint*>::value&&is_constructible<CryptoPP::EC2NPoint,
   std::__ndk1::iterator_traits<CryptoPP::EC2NPoint*>::reference>::value, void>::type
   std::__ndk1::vector<CryptoPP::EC2NPoint, std::__ndk1::allocator<CryptoPP::EC2NPoint>
   >::assign<CryptoPP::EC2NPoint*>(CryptoPP::EC2NPoint*, CryptoPP::EC2NPoint*) */

type __thiscall
std::__ndk1::vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>>::
assign<CryptoPP::EC2NPoint*>
          (vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>> *this,
          EC2NPoint *param_1,EC2NPoint *param_2)

{
  long lVar1;
  EC2NPoint *pEVar2;
  EC2NPoint *pEVar3;
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
  uVar11 = ((long)param_2 - (long)param_1 >> 4) * -0x3333333333333333;
  if (uVar11 < (ulong)(lVar9 * -0x3333333333333333) || uVar11 + lVar9 * 0x3333333333333333 == 0) {
    lVar6 = *(long *)(this + 8) - (long)puVar10 >> 4;
    pEVar2 = param_1 + (*(long *)(this + 8) - (long)puVar10);
    pEVar3 = pEVar2;
    if (uVar11 < (ulong)(lVar6 * -0x3333333333333333) || uVar11 + lVar6 * 0x3333333333333333 == 0) {
      pEVar3 = param_2;
    }
    puVar7 = (undefined8 *)this;
    if (pEVar3 != param_1) {
      lVar9 = 0;
      do {
        CryptoPP::PolynomialMod2::operator=
                  ((PolynomialMod2 *)((long)puVar10 + lVar9 + 8),
                   (PolynomialMod2 *)(param_1 + lVar9 + 8));
        puVar7 = (undefined8 *)
                 CryptoPP::PolynomialMod2::operator=
                           ((PolynomialMod2 *)((long)puVar10 + lVar9 + 0x28),
                            (PolynomialMod2 *)(param_1 + lVar9 + 0x28));
        lVar1 = lVar9 + 0x50;
        *(vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>> *)
         ((long)puVar10 + lVar9 + 0x48) =
             *(vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>> *)
              (param_1 + lVar9 + 0x48);
        lVar9 = lVar1;
      } while (param_1 + lVar1 != pEVar3);
      puVar10 = (undefined8 *)((long)puVar10 + lVar1);
    }
    tVar4 = (type)puVar7;
    puVar5 = *(undefined8 **)(this + 8);
    if (uVar11 < (ulong)(lVar6 * -0x3333333333333333) || uVar11 + lVar6 * 0x3333333333333333 == 0) {
      while (puVar5 != puVar10) {
        puVar5 = puVar5 + -10;
        tVar4 = (**(code **)*puVar5)(puVar5);
      }
      *(undefined8 **)(this + 8) = puVar10;
      return tVar4;
    }
    if (pEVar3 != param_2) {
      lVar6 = 0;
      do {
        puVar10 = (undefined8 *)((long)puVar5 + lVar6);
        *puVar10 = &PTR__EC2NPoint_010026a8;
                    /* try { // try from 00cbb7b8 to 00cbb7bf has its CatchHandler @ 00cbb96c */
        CryptoPP::PolynomialMod2::PolynomialMod2
                  ((PolynomialMod2 *)(puVar10 + 1),(PolynomialMod2 *)(pEVar2 + lVar6 + 8));
                    /* try { // try from 00cbb7c8 to 00cbb7cf has its CatchHandler @ 00cbb930 */
        puVar7 = (undefined8 *)
                 CryptoPP::PolynomialMod2::PolynomialMod2
                           ((PolynomialMod2 *)(puVar10 + 5),
                            (PolynomialMod2 *)(pEVar2 + lVar6 + 0x28));
        lVar9 = lVar6 + 0x50;
        *(EC2NPoint *)(puVar10 + 9) = pEVar2[lVar6 + 0x48];
        lVar6 = lVar9;
      } while (pEVar2 + lVar9 != param_2);
      puVar5 = (undefined8 *)((long)puVar5 + lVar9);
    }
LAB_00cbb904:
    *(undefined8 **)(this + 8) = puVar5;
    return (type)puVar7;
  }
  if (puVar10 != (undefined8 *)0x0) {
    puVar7 = *(undefined8 **)(this + 8);
    puVar5 = puVar10;
    if (puVar7 != puVar10) {
      do {
        puVar7 = puVar7 + -10;
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
  if (uVar11 < 0x333333333333334) {
    uVar8 = (lVar6 >> 4) * -0x6666666666666666;
    if (uVar11 <= uVar8) {
      uVar11 = uVar8;
    }
    if (0x199999999999998 < (ulong)((lVar6 >> 4) * -0x3333333333333333)) {
      uVar11 = 0x333333333333333;
    }
    if (uVar11 < 0x333333333333334) {
      puVar5 = (undefined8 *)operator_new(uVar11 * 0x50);
      *(undefined8 **)this = puVar5;
      *(undefined8 **)(this + 8) = puVar5;
      *(undefined8 **)(this + 0x10) = puVar5 + uVar11 * 10;
      puVar7 = puVar5;
      if (param_1 != param_2) {
        lVar6 = 0;
        do {
          puVar10 = (undefined8 *)((long)puVar5 + lVar6);
          *puVar10 = &PTR__EC2NPoint_010026a8;
                    /* try { // try from 00cbb8cc to 00cbb8d3 has its CatchHandler @ 00cbb9b4 */
          CryptoPP::PolynomialMod2::PolynomialMod2
                    ((PolynomialMod2 *)(puVar10 + 1),(PolynomialMod2 *)(param_1 + lVar6 + 8));
                    /* try { // try from 00cbb8dc to 00cbb8e3 has its CatchHandler @ 00cbb978 */
          puVar7 = (undefined8 *)
                   CryptoPP::PolynomialMod2::PolynomialMod2
                             ((PolynomialMod2 *)(puVar10 + 5),
                              (PolynomialMod2 *)(param_1 + lVar6 + 0x28));
          lVar9 = lVar6 + 0x50;
          *(EC2NPoint *)(puVar10 + 9) = param_1[lVar6 + 0x48];
          lVar6 = lVar9;
        } while (param_1 + lVar9 != param_2);
        puVar5 = (undefined8 *)((long)puVar5 + lVar9);
      }
      goto LAB_00cbb904;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__vector_base_common<true>::__throw_length_error();
}


