// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildImpressionsJSON
// Entry Point: 00af4b94
// Size: 980 bytes
// Signature: undefined __thiscall buildImpressionsJSON(GiantsAdsProvider * this, vector * param_1)


/* GiantsAdsProvider::buildImpressionsJSON(std::__ndk1::vector<GiantsAdsProvider::Impression,
   std::__ndk1::allocator<GiantsAdsProvider::Impression> > const&) */

void __thiscall GiantsAdsProvider::buildImpressionsJSON(GiantsAdsProvider *this,vector *param_1)

{
  char *pcVar1;
  long lVar2;
  undefined8 *this_00;
  undefined2 *puVar3;
  undefined8 *this_01;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  char *local_a0;
  byte local_98 [16];
  char *local_88;
  undefined local_80 [6];
  undefined uStack_7a;
  undefined uStack_79;
  undefined uStack_78;
  undefined2 uStack_77;
  undefined uStack_75;
  uint uStack_74;
  undefined4 local_70;
  uint uStack_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this_00 = (undefined8 *)operator_new(0x18);
  lVar5 = *(long *)param_1;
  lVar6 = *(long *)(param_1 + 8);
  this_00[1] = 0;
  this_00[2] = 0;
  *this_00 = 0;
  if (lVar6 != lVar5) {
    puVar8 = (undefined8 *)((ulong)local_80 | 1);
    lVar6 = 0;
    uVar7 = 0;
    pcVar9 = (char *)((ulong)local_98 | 1);
    do {
      this_01 = (undefined8 *)operator_new(0x28);
      this_01[4] = 0;
      *puVar8 = 0x6e676961706d6163;
      uStack_75 = 0;
      local_80[0] = (Atom)0x14;
      this_01[1] = 0;
      *this_01 = 0;
      this_01[3] = 0;
      this_01[2] = 0;
      *(undefined4 *)(this_01 + 4) = 0x3f800000;
      *(undefined2 *)(puVar8 + 1) = 0x6449;
                    /* try { // try from 00af4c98 to 00af4c9f has its CatchHandler @ 00af4fc8 */
      std::__ndk1::to_string(*(uint *)(lVar5 + lVar6));
      pcVar1 = pcVar9;
      if ((local_98[0] & 1) != 0) {
        pcVar1 = local_88;
      }
                    /* try { // try from 00af4cb0 to 00af4cbb has its CatchHandler @ 00af4fb0 */
      JSONUtil::Object::addAtom((Object *)this_01,(basic_string *)local_80,pcVar1);
      if ((local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
      if (((byte)local_80[0] & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_6c,local_70));
      }
      StringUtil::base64Encode((uchar *)(*(long *)param_1 + lVar6 + 4),0x10,true,&local_a0);
      uStack_7a = 0;
      local_80[0] = (Atom)0xa;
      *(undefined4 *)puVar8 = 0x4970616d;
      *(undefined *)((long)puVar8 + 4) = 100;
                    /* try { // try from 00af4d1c to 00af4d27 has its CatchHandler @ 00af4f94 */
      JSONUtil::Object::addAtom((Object *)this_01,(basic_string *)local_80,local_a0);
      if (((byte)local_80[0] & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_6c,local_70));
      }
      if (local_a0 != (char *)0x0) {
        operator_delete__(local_a0);
      }
      lVar5 = *(long *)param_1;
      local_80[0] = (Atom)0x16;
      uStack_74 = uStack_74 & 0xffffff00;
      *(undefined4 *)((long)puVar8 + 7) = 0x6449746e;
      *puVar8 = 0x6e656d6563616c70;
                    /* try { // try from 00af4d74 to 00af4d7b has its CatchHandler @ 00af4f90 */
      std::__ndk1::to_string(*(uint *)(lVar5 + lVar6 + 0x14));
      pcVar1 = pcVar9;
      if ((local_98[0] & 1) != 0) {
        pcVar1 = local_88;
      }
                    /* try { // try from 00af4d8c to 00af4d97 has its CatchHandler @ 00af4f8c */
      JSONUtil::Object::addAtom((Object *)this_01,(basic_string *)local_80,pcVar1);
      if ((local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
      if (((byte)local_80[0] & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_6c,local_70));
      }
      lVar5 = *(long *)param_1;
      local_80[0] = (Atom)0x16;
      uStack_74 = uStack_74 & 0xffffff00;
      *(undefined4 *)((long)puVar8 + 7) = 0x734d706d;
      *puVar8 = 0x6d617473656d6974;
                    /* try { // try from 00af4de8 to 00af4def has its CatchHandler @ 00af4f88 */
      std::__ndk1::to_string(*(ulonglong *)(lVar5 + lVar6 + 0x20));
      pcVar1 = pcVar9;
      if ((local_98[0] & 1) != 0) {
        pcVar1 = local_88;
      }
                    /* try { // try from 00af4e00 to 00af4e0b has its CatchHandler @ 00af4f84 */
      JSONUtil::Object::addAtom((Object *)this_01,(basic_string *)local_80,pcVar1);
      if ((local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
      if (((byte)local_80[0] & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_6c,local_70));
      }
      lVar5 = *(long *)param_1;
      uStack_6c = uStack_6c & 0xffffff00;
      local_80[0] = (Atom)0x26;
      *(undefined4 *)((long)puVar8 + 0xf) = 0x72656966;
      puVar8[1] = 0x6669746e65644970;
      *puVar8 = 0x6d617473656d6974;
                    /* try { // try from 00af4e60 to 00af4e67 has its CatchHandler @ 00af4f80 */
      std::__ndk1::to_string(*(uint *)(lVar5 + lVar6 + 0x18));
      pcVar1 = pcVar9;
      if ((local_98[0] & 1) != 0) {
        pcVar1 = local_88;
      }
                    /* try { // try from 00af4e78 to 00af4e83 has its CatchHandler @ 00af4f7c */
      JSONUtil::Object::addAtom((Object *)this_01,(basic_string *)local_80,pcVar1);
      if ((local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
      if (((byte)local_80[0] & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_6c,local_70));
      }
      puVar3 = (undefined2 *)operator_new(0x10);
      *(undefined8 **)(puVar3 + 4) = this_01;
      *puVar3 = 4;
      JSONUtil::Array::addAtom((Array *)this_00,(Atom *)puVar3);
      lVar5 = *(long *)param_1;
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x28;
      uVar4 = (*(long *)(param_1 + 8) - lVar5 >> 3) * -0x3333333333333333;
    } while (uVar7 <= uVar4 && uVar4 - uVar7 != 0);
  }
  puVar8 = (undefined8 *)operator_new(0x28);
  puVar8[4] = 0;
  uStack_74 = uStack_74 & 0xffffff00;
  *(undefined4 *)(puVar8 + 4) = 0x3f800000;
  local_80[0] = (Atom)0x16;
  puVar8[1] = 0;
  *puVar8 = 0;
  puVar8[3] = 0;
  puVar8[2] = 0;
  uStack_77 = 0x6e6f;
  uStack_75 = 0x73;
  local_80[1] = 0x69;
  local_80._2_4_ = 0x6572706d;
  uStack_7a = 0x73;
  uStack_79 = 0x73;
  uStack_78 = 0x69;
                    /* try { // try from 00af4ef0 to 00af4efb has its CatchHandler @ 00af4f78 */
  JSONUtil::Object::addAtom((Object *)puVar8,(basic_string *)local_80,(Array *)this_00);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_6c,local_70));
  }
  uStack_78 = SUB81(puVar8,0);
  uStack_77 = (undefined2)((ulong)puVar8 >> 8);
  uStack_75 = (undefined)((ulong)puVar8 >> 0x18);
  uStack_74 = (uint)((ulong)puVar8 >> 0x20);
  local_80[0] = (Atom)0x4;
  local_80[1] = 0;
                    /* try { // try from 00af4f18 to 00af4f27 has its CatchHandler @ 00af4f68 */
  JSONUtil::serialize((Atom *)local_80,1);
  JSONUtil::Atom::clear();
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


