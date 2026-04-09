// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsolatedInitialize
// Entry Point: 00ced154
// Size: 336 bytes
// Signature: undefined __thiscall IsolatedInitialize(HexEncoder * this, NameValuePairs * param_1)


/* CryptoPP::HexEncoder::IsolatedInitialize(CryptoPP::NameValuePairs const&) */

void __thiscall CryptoPP::HexEncoder::IsolatedInitialize(HexEncoder *this,NameValuePairs *param_1)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  undefined uVar4;
  long *plVar5;
  char *local_70;
  undefined **local_68;
  NameValuePairs *pNStack_60;
  undefined ***local_58;
  undefined **local_50;
  long *local_48;
  undefined local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar4 = SUB81(&local_68,0);
  bVar2 = (**(code **)(*(long *)param_1 + 0x10))(param_1,"Uppercase",&bool::typeinfo);
  plVar5 = *(long **)(this + 0x90);
  local_70 = "0123456789ABCDEF";
  if (((char)local_68 != '\0' | (bVar2 ^ 0xff) & 1) == 0) {
    local_70 = "0123456789abcdef";
  }
  MakeParameters<unsigned_char_const*>
            ((CryptoPP *)"EncodingLookupArray",(char *)&local_70,(uchar **)0x0,(bool)uVar4);
                    /* try { // try from 00ced1ec to 00ced1f3 has its CatchHandler @ 00ced2ac */
  plVar3 = (long *)operator_new(0x28);
  *(undefined4 *)(plVar3 + 4) = 4;
  plVar3[3] = (long)local_48;
  *plVar3 = (long)&PTR__AlgorithmParametersBase_00ff0ef0;
  plVar3[1] = (long)"Log2Base";
  *(undefined2 *)(plVar3 + 2) = 1;
  local_68 = &PTR__NameValuePairs_00feeb30;
  local_40 = 1;
                    /* try { // try from 00ced248 to 00ced257 has its CatchHandler @ 00ced2a8 */
  pNStack_60 = param_1;
  local_58 = &local_50;
  local_48 = plVar3;
  (**(code **)(*plVar5 + 0x70))(plVar5,&local_68,0xffffffff);
  local_50 = &PTR__AlgorithmParameters_00feeb08;
  if (local_48 != (long *)0x0) {
                    /* try { // try from 00ced278 to 00ced27b has its CatchHandler @ 00ced2a4 */
    (**(code **)(*local_48 + 8))();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


