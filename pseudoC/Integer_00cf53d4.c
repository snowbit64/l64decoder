// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Integer
// Entry Point: 00cf53d4
// Size: 564 bytes
// Signature: undefined __thiscall Integer(Integer * this, BufferedTransformation * param_1, ulong param_2, Signedness param_3, ByteOrder param_4)


/* CryptoPP::Integer::Integer(CryptoPP::BufferedTransformation&, unsigned long,
   CryptoPP::Integer::Signedness, CryptoPP::ByteOrder) */

void __thiscall
CryptoPP::Integer::Integer
          (Integer *this,BufferedTransformation *param_1,ulong param_2,Signedness param_3,
          ByteOrder param_4)

{
  uchar uVar1;
  ulong uVar2;
  long lVar3;
  uchar *puVar4;
  uchar *puVar5;
  uchar *puVar6;
  uchar *puVar7;
  uchar *puVar8;
  StringStore aSStack_80 [56];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
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
      puVar5 = (uchar *)0x0;
    }
    else {
                    /* try { // try from 00cf5520 to 00cf5527 has its CatchHandler @ 00cf5608 */
      puVar5 = (uchar *)UnalignedAllocate(param_2);
    }
                    /* try { // try from 00cf5540 to 00cf55af has its CatchHandler @ 00cf5618 */
    (**(code **)(*(long *)param_1 + 0xb0))(param_1,puVar5,param_2);
    if ((param_2 != 0) && (puVar6 = puVar5 + (param_2 - 1), puVar4 = puVar5, puVar5 < puVar6)) {
      do {
        puVar8 = puVar4 + 1;
        uVar1 = *puVar4;
        *puVar4 = *puVar6;
        puVar7 = puVar6 + -1;
        *puVar6 = uVar1;
        puVar6 = puVar7;
        puVar4 = puVar8;
      } while (puVar8 < puVar7);
    }
    StringStore::StringStore(aSStack_80,puVar5,param_2);
    Decode(this,(BufferedTransformation *)aSStack_80,param_2,param_3);
    if (param_2 != 0) {
      do {
        uVar2 = param_2 - 1;
        puVar5[param_2 - 1] = '\0';
        param_2 = uVar2;
      } while (uVar2 != 0);
    }
                    /* try { // try from 00cf55d4 to 00cf55db has its CatchHandler @ 00cf560c */
    UnalignedDeallocate(puVar5);
  }
  else {
                    /* try { // try from 00cf54fc to 00cf550f has its CatchHandler @ 00cf5610 */
    Decode(this,param_1,param_2,param_3);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


