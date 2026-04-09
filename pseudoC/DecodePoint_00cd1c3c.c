// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DecodePoint
// Entry Point: 00cd1c3c
// Size: 964 bytes
// Signature: undefined __thiscall DecodePoint(ECP * this, ECPPoint * param_1, BufferedTransformation * param_2, ulong param_3)


/* CryptoPP::ECP::DecodePoint(CryptoPP::ECPPoint&, CryptoPP::BufferedTransformation&, unsigned long)
   const */

bool __thiscall
CryptoPP::ECP::DecodePoint
          (ECP *this,ECPPoint *param_1,BufferedTransformation *param_2,ulong param_3)

{
  Integer *this_00;
  long lVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  Integer *pIVar7;
  byte local_17c [4];
  undefined **local_178 [2];
  ulong local_168;
  ulong uStack_160;
  void *local_158;
  undefined **local_148 [2];
  ulong local_138;
  ulong uStack_130;
  void *local_128;
  undefined **local_118 [2];
  ulong local_108;
  ulong uStack_100;
  void *local_f8;
  undefined **local_e8 [2];
  ulong local_d8;
  ulong uStack_d0;
  void *local_c8;
  undefined **local_b8 [2];
  ulong local_a8;
  ulong uStack_a0;
  void *local_98;
  undefined **local_88 [2];
  ulong local_78;
  ulong uStack_70;
  void *local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((param_3 != 0) &&
     (lVar5 = (**(code **)(*(long *)param_2 + 0xa8))(param_2,local_17c), lVar5 != 0)) {
    if (local_17c[0] - 2 < 2) {
      uVar6 = (**(code **)(*(long *)this + 0x78))(this,1);
      if ((uVar6 & 0xffffffff) == param_3) {
        Integer::Integer((Integer *)local_88,(Integer *)(*(long *)(this + 0x10) + 0x18));
        param_1[0x68] = (ECPPoint)0x0;
                    /* try { // try from 00cd1cf0 to 00cd1d0b has its CatchHandler @ 00cd208c */
        uVar6 = ModularArithmetic::MaxElementByteLength();
        pIVar7 = (Integer *)(uVar6 & 0xffffffff);
        Integer::Decode((Integer *)(param_1 + 8),param_2,(ulong)pIVar7,0);
                    /* try { // try from 00cd1d0c to 00cd1d1b has its CatchHandler @ 00cd2088 */
        Integer::Times((Integer *)(param_1 + 8));
                    /* try { // try from 00cd1d20 to 00cd1d2b has its CatchHandler @ 00cd2078 */
        Integer::Plus((Integer *)local_178);
                    /* try { // try from 00cd1d2c to 00cd1d3b has its CatchHandler @ 00cd2068 */
        Integer::Times((Integer *)local_148);
                    /* try { // try from 00cd1d40 to 00cd1d4b has its CatchHandler @ 00cd2058 */
        Integer::Plus((Integer *)local_118);
                    /* try { // try from 00cd1d4c to 00cd1d5b has its CatchHandler @ 00cd2048 */
        Integer::Modulo((Integer *)local_e8);
        this_00 = (Integer *)(param_1 + 0x38);
                    /* try { // try from 00cd1d60 to 00cd1d6b has its CatchHandler @ 00cd2038 */
        Integer::operator=(this_00,(Integer *)local_b8);
        local_b8[0] = &PTR__Integer_0100c890;
        uVar6 = local_a8;
        if (uStack_a0 <= local_a8) {
          uVar6 = uStack_a0;
        }
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)((long)local_98 + uVar6 * 4 + -4) = 0;
        }
                    /* try { // try from 00cd1da8 to 00cd1dab has its CatchHandler @ 00cd2034 */
        UnalignedDeallocate(local_98);
        local_e8[0] = &PTR__Integer_0100c890;
        if (uStack_d0 <= local_d8) {
          local_d8 = uStack_d0;
        }
        for (; local_d8 != 0; local_d8 = local_d8 - 1) {
          *(undefined4 *)((long)local_c8 + local_d8 * 4 + -4) = 0;
        }
                    /* try { // try from 00cd1ddc to 00cd1ddf has its CatchHandler @ 00cd2030 */
        UnalignedDeallocate(local_c8);
        local_118[0] = &PTR__Integer_0100c890;
        if (uStack_100 <= local_108) {
          local_108 = uStack_100;
        }
        for (; local_108 != 0; local_108 = local_108 - 1) {
          *(undefined4 *)((long)local_f8 + local_108 * 4 + -4) = 0;
        }
                    /* try { // try from 00cd1e10 to 00cd1e13 has its CatchHandler @ 00cd202c */
        UnalignedDeallocate(local_f8);
        local_148[0] = &PTR__Integer_0100c890;
        if (uStack_130 <= local_138) {
          local_138 = uStack_130;
        }
        for (; local_138 != 0; local_138 = local_138 - 1) {
          *(undefined4 *)((long)local_128 + local_138 * 4 + -4) = 0;
        }
                    /* try { // try from 00cd1e44 to 00cd1e47 has its CatchHandler @ 00cd2028 */
        UnalignedDeallocate(local_128);
        local_178[0] = &PTR__Integer_0100c890;
        if (uStack_160 <= local_168) {
          local_168 = uStack_160;
        }
        for (; local_168 != 0; local_168 = local_168 - 1) {
          *(undefined4 *)((long)local_158 + local_168 * 4 + -4) = 0;
        }
                    /* try { // try from 00cd1e78 to 00cd1e7b has its CatchHandler @ 00cd2024 */
        UnalignedDeallocate(local_158);
                    /* try { // try from 00cd1e7c to 00cd1e87 has its CatchHandler @ 00cd208c */
        iVar4 = Jacobi(this_00,(Integer *)local_88);
        bVar2 = iVar4 == 1;
        if (bVar2) {
                    /* try { // try from 00cd1e94 to 00cd1ea3 has its CatchHandler @ 00cd201c */
          ModularSquareRoot((CryptoPP *)this_00,(Integer *)local_88,pIVar7);
                    /* try { // try from 00cd1ea4 to 00cd1eaf has its CatchHandler @ 00cd200c */
          Integer::operator=(this_00,(Integer *)local_b8);
          local_b8[0] = &PTR__Integer_0100c890;
          if (uStack_a0 <= local_a8) {
            local_a8 = uStack_a0;
          }
          for (; local_a8 != 0; local_a8 = local_a8 - 1) {
            *(undefined4 *)((long)local_98 + local_a8 * 4 + -4) = 0;
          }
                    /* try { // try from 00cd1ee0 to 00cd1ee3 has its CatchHandler @ 00cd2008 */
          UnalignedDeallocate(local_98);
                    /* try { // try from 00cd1ee8 to 00cd1ef3 has its CatchHandler @ 00cd208c */
          bVar3 = Integer::GetBit(this_00,0);
          if (((bVar3 ^ (local_17c[0] & 1) == 0) & 1) == 0) {
                    /* try { // try from 00cd1f04 to 00cd1f13 has its CatchHandler @ 00cd2004 */
            Integer::Minus((Integer *)local_88);
                    /* try { // try from 00cd1f14 to 00cd1f1f has its CatchHandler @ 00cd2000 */
            Integer::operator=(this_00,(Integer *)local_b8);
            Integer::~Integer((Integer *)local_b8);
          }
        }
        local_88[0] = &PTR__Integer_0100c890;
        if (uStack_70 <= local_78) {
          local_78 = uStack_70;
        }
        for (; local_78 != 0; local_78 = local_78 - 1) {
          *(undefined4 *)((long)local_68 + local_78 * 4 + -4) = 0;
        }
                    /* try { // try from 00cd1f58 to 00cd1f5b has its CatchHandler @ 00cd2020 */
        UnalignedDeallocate(local_68);
        goto LAB_00cd1f64;
      }
    }
    else {
      if (local_17c[0] == 4) {
        uVar6 = (**(code **)(*(long *)this + 0x78))(this,0);
        bVar2 = false;
        if ((uVar6 & 0xffffffff) == param_3) {
          uVar6 = ModularArithmetic::MaxElementByteLength();
          param_1[0x68] = (ECPPoint)0x0;
          Integer::Decode((Integer *)(param_1 + 8),param_2,uVar6 & 0xffffffff,0);
          Integer::Decode((Integer *)(param_1 + 0x38),param_2,uVar6 & 0xffffffff,0);
          bVar2 = true;
        }
        goto LAB_00cd1f64;
      }
      if (local_17c[0] == 0) {
        bVar2 = true;
        param_1[0x68] = (ECPPoint)0x1;
        goto LAB_00cd1f64;
      }
    }
  }
  bVar2 = false;
LAB_00cd1f64:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}


