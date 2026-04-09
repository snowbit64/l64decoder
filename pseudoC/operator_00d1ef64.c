// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator==
// Entry Point: 00d1ef64
// Size: 556 bytes
// Signature: undefined __thiscall operator==(ByteQueue * this, ByteQueue * param_1)


/* CryptoPP::ByteQueue::TEMPNAMEPLACEHOLDERVALUE(CryptoPP::ByteQueue const&) const */

undefined8 __thiscall CryptoPP::ByteQueue::operator==(ByteQueue *this,ByteQueue *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char local_138 [4];
  char local_134 [4];
  long local_130;
  undefined **local_128;
  undefined **ppuStack_120;
  ByteQueue *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined **local_e0;
  undefined **ppuStack_d8;
  ByteQueue *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined **local_98;
  undefined **ppuStack_90;
  char *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar3 = 0;
  for (plVar2 = *(long **)(this + 0x20); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    lVar3 = (plVar2[6] + lVar3) - plVar2[5];
  }
  lVar4 = 0;
  for (plVar2 = *(long **)(param_1 + 0x20); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    lVar4 = (plVar2[6] + lVar4) - plVar2[5];
  }
  if (*(long *)(this + 0x38) + lVar3 == *(long *)(param_1 + 0x38) + lVar4) {
    Algorithm::Algorithm((Algorithm *)&local_e0,false);
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    local_a0 = 0;
    local_e0 = &PTR__BufferedTransformation_0100f4c8;
    ppuStack_d8 = &PTR__Walker_0100f658;
    local_c8 = this;
    BufferedTransformation::Initialize((NameValuePairs *)&local_e0,0x211f5e0);
    Algorithm::Algorithm((Algorithm *)&local_128,false);
    uStack_100 = 0;
    local_108 = 0;
    uStack_f0 = 0;
    local_f8 = 0;
    local_e8 = 0;
    local_128 = &PTR__BufferedTransformation_0100f4c8;
    ppuStack_120 = &PTR__Walker_0100f658;
    local_110 = param_1;
    BufferedTransformation::Initialize((NameValuePairs *)&local_128,0x211f5e0);
    do {
      Algorithm::Algorithm((Algorithm *)&local_98,false);
      uVar5 = 1;
      uStack_70 = 0;
      local_78 = 1;
      local_130 = 1;
      local_98 = &PTR__BufferedTransformation_01007ee0;
      ppuStack_90 = &PTR__ArraySink_01008070;
      local_80 = local_134;
      (*(code *)local_e0[0x23])(&local_e0,&local_98,&local_130,&DEFAULT_CHANNEL,1);
      if (local_130 == 0) goto LAB_00d1f148;
      Algorithm::Algorithm((Algorithm *)&local_98,false);
      uStack_70 = 0;
      local_78 = 1;
      local_130 = 1;
      local_98 = &PTR__BufferedTransformation_01007ee0;
      ppuStack_90 = &PTR__ArraySink_01008070;
      local_80 = local_138;
      (*(code *)local_128[0x23])(&local_128,&local_98,&local_130,&DEFAULT_CHANNEL,1);
      if (local_130 == 0) {
        if (*(long *)(lVar1 + 0x28) == local_68) {
          return 1;
        }
        goto LAB_00d1f18c;
      }
    } while (local_134[0] == local_138[0]);
  }
  uVar5 = 0;
LAB_00d1f148:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar5;
  }
LAB_00d1f18c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


