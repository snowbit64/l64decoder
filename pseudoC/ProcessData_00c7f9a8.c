// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProcessData
// Entry Point: 00c7f9a8
// Size: 816 bytes
// Signature: undefined __thiscall ProcessData(AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::OFB_ModePolicy>> * this, uchar * param_1, uchar * param_2, ulong param_3)


/* CryptoPP::AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,
   CryptoPP::OFB_ModePolicy> >::ProcessData(unsigned char*, unsigned char const*, unsigned long) */

void __thiscall
CryptoPP::
AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::OFB_ModePolicy>>
::ProcessData(AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::OFB_ModePolicy>>
              *this,uchar *param_1,uchar *param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte bVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined2 uVar16;
  undefined8 uVar17;
  
  lVar2 = tpidr_el0;
  lVar10 = *(long *)(lVar2 + 0x28);
  uVar11 = *(ulong *)(this + 0x68);
  if (uVar11 != 0) {
    uVar15 = param_3;
    if (uVar11 <= param_3) {
      uVar15 = uVar11;
    }
    xorbuf(param_1,param_2,(uchar *)((*(long *)(this + 0x60) + *(long *)(this + 0x58)) - uVar11),
           uVar15);
    param_3 = param_3 - uVar15;
    param_2 = param_2 + uVar15;
    param_1 = param_1 + uVar15;
    *(ulong *)(this + 0x68) = *(long *)(this + 0x68) - uVar15;
  }
  plVar6 = (long *)(**(code **)(*(long *)this + 0xe0))(this);
  uVar4 = (**(code **)(*plVar6 + 0x18))();
  uVar15 = (ulong)uVar4;
  uVar11 = (**(code **)(*plVar6 + 0x38))(plVar6);
  if (((uVar11 & 1) == 0) || (param_3 < uVar15)) goto LAB_00c7fb24;
  uVar11 = 0;
  if (uVar15 != 0) {
    uVar11 = param_3 / uVar15;
  }
  uVar5 = (**(code **)(*plVar6 + 0x10))(plVar6);
  if (uVar5 == 0) {
LAB_00c7faa8:
    uVar13 = (ulong)uVar5;
    uVar14 = 0;
    if (uVar13 != 0) {
      uVar14 = (ulong)param_2 / uVar13;
    }
    if (param_2 == (uchar *)(uVar14 * uVar13)) goto LAB_00c7fa9c;
LAB_00c7fab8:
    bVar9 = 0;
    if (uVar5 != 0) goto LAB_00c7fac0;
LAB_00c7fae0:
    uVar13 = (ulong)uVar5;
    uVar14 = 0;
    if (uVar13 != 0) {
      uVar14 = (ulong)param_1 / uVar13;
    }
    bVar3 = param_1 == (uchar *)(uVar14 * uVar13);
  }
  else {
    uVar1 = uVar5 - 1;
    if (uVar1 != 0) {
      if ((uVar5 & uVar1) != 0) goto LAB_00c7faa8;
      if ((uVar1 & (uint)param_2) == 0) goto LAB_00c7fa9c;
      goto LAB_00c7fab8;
    }
LAB_00c7fa9c:
    bVar9 = 2;
    if (uVar5 == 0) goto LAB_00c7fae0;
LAB_00c7fac0:
    uVar1 = uVar5 - 1;
    if (uVar1 == 0) {
      bVar3 = true;
    }
    else {
      if ((uVar5 & uVar1) != 0) goto LAB_00c7fae0;
      bVar3 = (uVar1 & (uint)param_1) == 0;
    }
  }
  (**(code **)(*plVar6 + 0x40))(plVar6,bVar9 | bVar3,param_1,param_2,uVar11);
  lVar12 = uVar11 * uVar15;
  param_2 = param_2 + lVar12;
  param_1 = param_1 + lVar12;
  param_3 = param_3 - lVar12;
LAB_00c7fb24:
  uVar11 = *(ulong *)(this + 0x58);
  if (uVar11 <= param_3) {
    uVar14 = 0;
    if (uVar15 != 0) {
      uVar14 = uVar11 / uVar15;
    }
    lVar12 = 0;
    do {
      (**(code **)(*plVar6 + 0x30))(plVar6,*(undefined8 *)(this + 0x60),uVar14);
      xorbuf(param_1 + lVar12,param_2 + lVar12,*(uchar **)(this + 0x60),uVar11);
      param_3 = param_3 - uVar11;
      lVar12 = lVar12 + uVar11;
    } while (uVar11 <= param_3);
    param_1 = param_1 + lVar12;
    param_2 = param_2 + lVar12;
  }
  if (param_3 != 0) {
    if (-uVar15 < param_3) {
      puVar7 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c7fc54 to 00c7fc5b has its CatchHandler @ 00c7fd14 */
      puVar8 = (undefined8 *)operator_new(0x30);
      *(undefined *)((long)puVar8 + 0x25) = 0;
      puVar8[1] = 0x6c7069746c754d6f;
      *puVar8 = 0x547055646e756f52;
      puVar8[3] = 0x65766f2072656765;
      puVar8[2] = 0x746e69203a664f65;
      *(undefined8 *)((long)puVar8 + 0x1d) = 0x776f6c667265766f;
      *puVar7 = &PTR__Exception_00fe0298;
      *(undefined4 *)(puVar7 + 1) = 1;
                    /* try { // try from 00c7fca4 to 00c7fcab has its CatchHandler @ 00c7fcf4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)(puVar7 + 2));
      *puVar7 = &PTR__Exception_00fe9ee0;
                    /* try { // try from 00c7fcbc to 00c7fcd3 has its CatchHandler @ 00c7fcd8 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&InvalidArgument::typeinfo,Exception::~Exception);
    }
    uVar11 = (uVar15 + param_3) - 1;
    uVar17 = NEON_cnt(uVar15,1);
    uVar16 = NEON_uaddlv(uVar17,1);
    if ((int)CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) == 1) {
      uVar14 = (ulong)(uVar4 - 1 & (uint)uVar11);
    }
    else {
      uVar14 = 0;
      if (uVar15 != 0) {
        uVar14 = uVar11 / uVar15;
      }
      uVar14 = uVar11 - uVar14 * uVar15;
    }
    uVar11 = uVar11 - uVar14;
    uVar14 = 0;
    if (uVar15 != 0) {
      uVar14 = uVar11 / uVar15;
    }
    (**(code **)(*plVar6 + 0x30))
              (plVar6,(*(long *)(this + 0x60) + *(long *)(this + 0x58)) - uVar11,uVar14);
    xorbuf(param_1,param_2,(uchar *)((*(long *)(this + 0x60) + *(long *)(this + 0x58)) - uVar11),
           param_3);
    *(ulong *)(this + 0x68) = uVar11 - param_3;
  }
  if (*(long *)(lVar2 + 0x28) != lVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


