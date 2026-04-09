// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Integer
// Entry Point: 00cf5a60
// Size: 520 bytes
// Signature: undefined __thiscall Integer(Integer * this, uchar * param_1, ulong param_2, Signedness param_3, ByteOrder param_4)


/* CryptoPP::Integer::Integer(unsigned char const*, unsigned long, CryptoPP::Integer::Signedness,
   CryptoPP::ByteOrder) */

void __thiscall
CryptoPP::Integer::Integer
          (Integer *this,uchar *param_1,ulong param_2,Signedness param_3,ByteOrder param_4)

{
  long lVar1;
  long lVar2;
  uchar *puVar3;
  uchar *puVar4;
  ulong uVar5;
  StringStore aSStack_80 [56];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  DataMemoryBarrier(2,3);
  if ((DAT_02120808 & 1) == 0) {
    DAT_02120978 = Baseline_MultiplyTop2;
    DAT_02120980 = Baseline_MultiplyTop4;
    DAT_021208a0 = Baseline_Multiply2;
    DAT_021208a8 = Baseline_Multiply4;
    DAT_021208b0 = Baseline_Multiply8;
    DAT_02120930 = Baseline_MultiplyBottom2;
    DAT_02120938 = Baseline_MultiplyBottom4;
    DAT_02120940 = Baseline_MultiplyBottom8;
    DAT_021208e8 = Baseline_Square2;
    DAT_021208f0 = Baseline_Square4;
    DAT_021208f8 = Baseline_Square8;
    DAT_02120988 = Baseline_MultiplyTop8;
    DAT_021208c0 = Baseline_Multiply16;
    DAT_02120950 = Baseline_MultiplyBottom16;
    DAT_02120908 = Baseline_Square16;
    DAT_02120998 = Baseline_MultiplyTop16;
    DAT_02120808 = 1;
    DataMemoryBarrier(2,3);
  }
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x10) = 0x3fffffffffffffff;
  *(undefined ***)this = &PTR__Integer_0100c890;
  if (param_4 == 0) {
    if (param_2 == 0) {
      param_2 = 0;
      puVar3 = (uchar *)0x0;
    }
    else {
                    /* try { // try from 00cf5bbc to 00cf5bc3 has its CatchHandler @ 00cf5c68 */
      puVar3 = (uchar *)UnalignedAllocate(param_2);
      puVar4 = puVar3;
      uVar5 = param_2;
      do {
        lVar2 = uVar5 - 1;
        uVar5 = uVar5 - 1;
        *puVar4 = param_1[lVar2];
        puVar4 = puVar4 + 1;
      } while (uVar5 != 0);
    }
                    /* try { // try from 00cf5bec to 00cf5c0f has its CatchHandler @ 00cf5c70 */
    StringStore::StringStore(aSStack_80,puVar3,param_2);
    Decode(this,(BufferedTransformation *)aSStack_80,param_2,param_3);
    for (; param_2 != 0; param_2 = param_2 - 1) {
      puVar3[param_2 - 1] = '\0';
    }
                    /* try { // try from 00cf5c34 to 00cf5c3b has its CatchHandler @ 00cf5c6c */
    UnalignedDeallocate(puVar3);
  }
  else {
                    /* try { // try from 00cf5b88 to 00cf5bab has its CatchHandler @ 00cf5c80 */
    StringStore::StringStore(aSStack_80,param_1,param_2);
    Decode(this,(BufferedTransformation *)aSStack_80,param_2,param_3);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


