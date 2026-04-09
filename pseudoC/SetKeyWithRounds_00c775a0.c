// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetKeyWithRounds
// Entry Point: 00c775a0
// Size: 176 bytes
// Signature: undefined __thiscall SetKeyWithRounds(SimpleKeyingInterface * this, uchar * param_1, ulong param_2, int param_3)


/* CryptoPP::SimpleKeyingInterface::SetKeyWithRounds(unsigned char const*, unsigned long, int) */

void __thiscall
CryptoPP::SimpleKeyingInterface::SetKeyWithRounds
          (SimpleKeyingInterface *this,uchar *param_1,ulong param_2,int param_3)

{
  long lVar1;
  int local_54;
  undefined **local_50;
  long *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_54 = param_3;
  MakeParameters<int>((CryptoPP *)"Rounds",(char *)&local_54,(int *)0x1,SUB41(param_3,0));
                    /* try { // try from 00c775f0 to 00c77603 has its CatchHandler @ 00c77654 */
  (**(code **)(*(long *)this + 0x38))(this,param_1,param_2,&local_50);
  local_50 = &PTR__AlgorithmParameters_00feeb08;
  if (local_48 != (long *)0x0) {
                    /* try { // try from 00c77624 to 00c77627 has its CatchHandler @ 00c77650 */
    (**(code **)(*local_48 + 8))();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


