// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsolatedInitialize
// Entry Point: 00c761e8
// Size: 672 bytes
// Signature: undefined __thiscall IsolatedInitialize(Grouper * this, NameValuePairs * param_1)


/* CryptoPP::Grouper::IsolatedInitialize(CryptoPP::NameValuePairs const&) */

void __thiscall CryptoPP::Grouper::IsolatedInitialize(Grouper *this,NameValuePairs *param_1)

{
  ulong *puVar1;
  void **ppvVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  void *pvVar8;
  char local_b8 [8];
  void *local_b0;
  ulong auStack_a8 [2];
  ulong local_98;
  ulong local_90;
  void *local_88;
  uint local_80 [2];
  void *local_78;
  ulong auStack_70 [2];
  ulong local_60;
  ulong local_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar4 = (**(code **)(*(long *)param_1 + 0x10))(param_1,"GroupSize",&int::typeinfo,local_80);
  lVar6 = (long)(int)local_80[0];
  local_58 = 0;
  local_50 = (void *)0x0;
  local_80[0] = local_80[0] & 0xffffff00;
  if ((uVar4 & 1) == 0) {
    lVar6 = 0;
  }
  local_78 = (void *)0x0;
  auStack_70[0] = 0;
  local_60 = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = (void *)0x0;
  *(long *)(this + 0x70) = lVar6;
  local_98 = 0xffffffffffffffff;
  local_b8[0] = '\0';
  local_b0 = (void *)0x0;
  auStack_a8[0] = 0;
  if (lVar6 == 0) {
    (**(code **)(*(long *)param_1 + 0x10))
              (param_1,"Separator",&ConstByteArrayParameter::typeinfo,local_80);
  }
  else {
                    /* try { // try from 00c76270 to 00c7633b has its CatchHandler @ 00c76490 */
    NameValuePairs::GetRequiredParameter<CryptoPP::ConstByteArrayParameter>
              ((char *)param_1,"Grouper",(ConstByteArrayParameter *)"Separator");
  }
  (**(code **)(*(long *)param_1 + 0x10))
            (param_1,"Terminator",&ConstByteArrayParameter::typeinfo,local_b8);
  puVar1 = auStack_70;
  if ((char)local_80[0] != '\0') {
    puVar1 = &local_58;
  }
  ppvVar2 = &local_78;
  if ((char)local_80[0] != '\0') {
    ppvVar2 = &local_50;
  }
  uVar7 = *puVar1;
  uVar4 = *(ulong *)(this + 0x40);
  pvVar5 = *(void **)(this + 0x48);
  pvVar8 = *ppvVar2;
  if (uVar4 == uVar7) {
LAB_00c7633c:
    *(ulong *)(this + 0x40) = uVar7;
    *(void **)(this + 0x48) = pvVar5;
    *(undefined8 *)(this + 0x38) = 0xffffffffffffffff;
    if ((pvVar8 != (void *)0x0) && (pvVar5 != (void *)0x0)) {
      memcpy(pvVar5,pvVar8,uVar7);
    }
  }
  else {
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined *)((long)pvVar5 + (uVar4 - 1)) = 0;
    }
    UnalignedDeallocate(pvVar5);
    if (uVar7 != 0) {
      pvVar5 = (void *)UnalignedAllocate(uVar7);
      goto LAB_00c7633c;
    }
    *(ulong *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x48) = 0;
  }
  ppvVar2 = &local_b0;
  puVar1 = auStack_a8;
  if (local_b8[0] != '\0') {
    ppvVar2 = &local_88;
    puVar1 = &local_90;
  }
  uVar4 = *(ulong *)(this + 0x60);
  *(undefined8 *)(this + 0x38) = 0xffffffffffffffff;
  pvVar5 = *(void **)(this + 0x68);
  uVar7 = *puVar1;
  pvVar8 = *ppvVar2;
  if (uVar4 != uVar7) {
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined *)((long)pvVar5 + (uVar4 - 1)) = 0;
    }
                    /* try { // try from 00c763c4 to 00c763d3 has its CatchHandler @ 00c76490 */
    UnalignedDeallocate(pvVar5);
    if (uVar7 == 0) {
      *(ulong *)(this + 0x60) = 0;
      *(undefined8 *)(this + 0x68) = 0;
      goto LAB_00c763f8;
    }
    pvVar5 = (void *)UnalignedAllocate(uVar7);
  }
  *(ulong *)(this + 0x60) = uVar7;
  *(void **)(this + 0x68) = pvVar5;
  *(undefined8 *)(this + 0x58) = 0xffffffffffffffff;
  if ((pvVar8 != (void *)0x0) && (pvVar5 != (void *)0x0)) {
    memcpy(pvVar5,pvVar8,uVar7);
  }
LAB_00c763f8:
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x58) = 0xffffffffffffffff;
  uVar4 = local_98;
  if (local_90 <= local_98) {
    uVar4 = local_90;
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined *)((long)local_88 + (uVar4 - 1)) = 0;
  }
                    /* try { // try from 00c7642c to 00c7642f has its CatchHandler @ 00c7648c */
  UnalignedDeallocate(local_88);
  uVar4 = local_60;
  if (local_58 <= local_60) {
    uVar4 = local_58;
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined *)((long)local_50 + (uVar4 - 1)) = 0;
  }
                    /* try { // try from 00c76458 to 00c7645b has its CatchHandler @ 00c76488 */
  UnalignedDeallocate(local_50);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


