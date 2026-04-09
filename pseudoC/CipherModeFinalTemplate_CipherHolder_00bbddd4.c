// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CipherModeFinalTemplate_CipherHolder
// Entry Point: 00bbddd4
// Size: 420 bytes
// Signature: undefined __thiscall CipherModeFinalTemplate_CipherHolder(CipherModeFinalTemplate_CipherHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)1,CryptoPP::Rijndael::Dec>,CryptoPP::CBC_Decryption> * this, uchar * param_1, ulong param_2, uchar * param_3)


/* CryptoPP::CipherModeFinalTemplate_CipherHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)1,
   CryptoPP::Rijndael::Dec>,
   CryptoPP::CBC_Decryption>::CipherModeFinalTemplate_CipherHolder(unsigned char const*, unsigned
   long, unsigned char const*) */

void __thiscall
CryptoPP::
CipherModeFinalTemplate_CipherHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)1,CryptoPP::Rijndael::Dec>,CryptoPP::CBC_Decryption>
::CipherModeFinalTemplate_CipherHolder
          (CipherModeFinalTemplate_CipherHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)1,CryptoPP::Rijndael::Dec>,CryptoPP::CBC_Decryption>
           *this,uchar *param_1,ulong param_2,uchar *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined uVar3;
  uchar *puVar4;
  undefined8 *puVar5;
  char local_a8 [8];
  uchar *local_a0;
  ulong uStack_98;
  ulong local_88;
  ulong local_80;
  void *local_78;
  undefined **local_70;
  long *local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  puVar5 = (undefined8 *)(this + 0x78);
  *puVar5 = &PTR__SimpleKeyingInterface_00fef588;
  puVar4 = param_3;
  Algorithm::Algorithm((Algorithm *)(this + 0x80),true);
  uVar3 = SUB81(puVar4,0);
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0x98) = 0x3fffffffffffffff;
  *(undefined8 *)(this + 0xb8) = 0xffffffffffffffff;
  *(undefined ***)this = &PTR__SimpleKeyingInterface_00fef588;
  *puVar5 = &PTR__Base_00febbf0;
  *(undefined ***)(this + 0x80) = &PTR__BlockCipherFinal_00febcc0;
                    /* try { // try from 00bbde64 to 00bbde6b has its CatchHandler @ 00bbdfd4 */
  Algorithm::Algorithm((Algorithm *)(this + 8),true);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x40) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x60) = 0xffffffffffffffff;
  *(undefined ***)this = &PTR__CipherModeFinalTemplate_CipherHolder_00feba10;
  *(undefined ***)(this + 8) = &PTR__CipherModeFinalTemplate_CipherHolder_00febaf8;
  *(undefined8 **)(this + 0x10) = puVar5;
                    /* try { // try from 00bbdea8 to 00bbdeab has its CatchHandler @ 00bbdfc4 */
  uStack_98 = (**(code **)(*(long *)(this + 0x80) + 0x30))();
  uStack_98 = uStack_98 & 0xffffffff;
  local_80 = 0;
  local_78 = (void *)0x0;
  local_a8[0] = '\0';
  local_88 = 0xffffffffffffffff;
                    /* try { // try from 00bbdec4 to 00bbdedb has its CatchHandler @ 00bbdfb4 */
  local_a0 = param_3;
  MakeParameters<CryptoPP::ConstByteArrayParameter>
            ((CryptoPP *)&DAT_004fa7ee,local_a8,(ConstByteArrayParameter *)0x1,(bool)uVar3);
                    /* try { // try from 00bbdee4 to 00bbdef7 has its CatchHandler @ 00bbdf80 */
  (**(code **)(*(long *)this + 0x38))(this,param_1,param_2,&local_70);
  local_70 = &PTR__AlgorithmParameters_00feeb08;
  if (local_68 != (long *)0x0) {
                    /* try { // try from 00bbdf18 to 00bbdf1b has its CatchHandler @ 00bbdf78 */
    (**(code **)(*local_68 + 8))();
  }
  uVar2 = local_88;
  if (local_80 <= local_88) {
    uVar2 = local_80;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined *)((long)local_78 + (uVar2 - 1)) = 0;
  }
                    /* try { // try from 00bbdf44 to 00bbdf47 has its CatchHandler @ 00bbdf7c */
  UnalignedDeallocate(local_78);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


