// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: assign<CryptoPP::Integer*>
// Entry Point: 00cb5d1c
// Size: 528 bytes
// Signature: type __thiscall assign<CryptoPP::Integer*>(vector<CryptoPP::Integer,std::__ndk1::allocator<CryptoPP::Integer>> * this, Integer * param_1, Integer * param_2)


/* std::__ndk1::enable_if<__is_cpp17_forward_iterator<CryptoPP::Integer*>::value&&is_constructible<CryptoPP::Integer,
   std::__ndk1::iterator_traits<CryptoPP::Integer*>::reference>::value, void>::type
   std::__ndk1::vector<CryptoPP::Integer, std::__ndk1::allocator<CryptoPP::Integer>
   >::assign<CryptoPP::Integer*>(CryptoPP::Integer*, CryptoPP::Integer*) */

type __thiscall
std::__ndk1::vector<CryptoPP::Integer,std::__ndk1::allocator<CryptoPP::Integer>>::
assign<CryptoPP::Integer*>
          (vector<CryptoPP::Integer,std::__ndk1::allocator<CryptoPP::Integer>> *this,
          Integer *param_1,Integer *param_2)

{
  Integer *pIVar1;
  Integer *pIVar2;
  type tVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *this_00;
  ulong uVar9;
  
  lVar4 = *(long *)(this + 0x10);
  this_00 = *(undefined8 **)this;
  lVar7 = lVar4 - (long)this_00 >> 4;
  uVar9 = ((long)param_2 - (long)param_1 >> 4) * -0x5555555555555555;
  if (uVar9 < (ulong)(lVar7 * -0x5555555555555555) || uVar9 + lVar7 * 0x5555555555555555 == 0) {
    lVar4 = *(long *)(this + 8) - (long)this_00 >> 4;
    pIVar1 = param_1 + (*(long *)(this + 8) - (long)this_00);
    pIVar2 = pIVar1;
    if (uVar9 < (ulong)(lVar4 * -0x5555555555555555) || uVar9 + lVar4 * 0x5555555555555555 == 0) {
      pIVar2 = param_2;
    }
    puVar5 = (undefined8 *)this;
    if (pIVar2 != param_1) {
      do {
        puVar5 = (undefined8 *)CryptoPP::Integer::operator=((Integer *)this_00,param_1);
        param_1 = param_1 + 0x30;
        this_00 = this_00 + 6;
      } while (param_1 != pIVar2);
    }
    tVar3 = (type)puVar5;
    puVar8 = *(undefined8 **)(this + 8);
    if ((ulong)(lVar4 * -0x5555555555555555) <= uVar9 && uVar9 + lVar4 * 0x5555555555555555 != 0) {
      while (pIVar2 != param_2) {
                    /* try { // try from 00cb5e00 to 00cb5e0b has its CatchHandler @ 00cb5f2c */
        tVar3 = CryptoPP::Integer::Integer((Integer *)puVar8,pIVar1);
        puVar8 = puVar8 + 6;
        pIVar1 = pIVar1 + 0x30;
        pIVar2 = pIVar1;
      }
      *(undefined8 **)(this + 8) = puVar8;
      return tVar3;
    }
    while (puVar8 != this_00) {
      puVar8 = puVar8 + -6;
      puVar5 = (undefined8 *)(**(code **)*puVar8)(puVar8);
    }
LAB_00cb5f08:
    *(undefined8 **)(this + 8) = this_00;
    return (type)puVar5;
  }
  if (this_00 != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(this + 8);
    puVar8 = this_00;
    if (puVar5 != this_00) {
      do {
        puVar5 = puVar5 + -6;
        (**(code **)*puVar5)(puVar5);
      } while (puVar5 != this_00);
      puVar8 = *(undefined8 **)this;
    }
    *(undefined8 **)(this + 8) = this_00;
    operator_delete(puVar8);
    lVar4 = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  if (uVar9 < 0x555555555555556) {
    uVar6 = (lVar4 >> 4) * 0x5555555555555556;
    if (uVar9 <= uVar6) {
      uVar9 = uVar6;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)((lVar4 >> 4) * -0x5555555555555555)) {
      uVar9 = 0x555555555555555;
    }
    if (uVar9 < 0x555555555555556) {
      puVar5 = (undefined8 *)operator_new(uVar9 * 0x30);
      *(undefined8 **)this = puVar5;
      *(undefined8 **)(this + 8) = puVar5;
      *(undefined8 **)(this + 0x10) = puVar5 + uVar9 * 6;
      this_00 = puVar5;
      if (param_1 != param_2) {
        do {
                    /* try { // try from 00cb5eec to 00cb5ef7 has its CatchHandler @ 00cb5f34 */
          puVar5 = (undefined8 *)CryptoPP::Integer::Integer((Integer *)this_00,param_1);
          param_1 = param_1 + 0x30;
          this_00 = this_00 + 6;
        } while (param_1 != param_2);
      }
      goto LAB_00cb5f08;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__vector_base_common<true>::__throw_length_error();
}


