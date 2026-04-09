// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BaseN_Decoder
// Entry Point: 00cb8d6c
// Size: 292 bytes
// Signature: undefined __thiscall BaseN_Decoder(BaseN_Decoder * this, int * param_1, int param_2, BufferedTransformation * param_3)


/* CryptoPP::BaseN_Decoder::BaseN_Decoder(int const*, int, CryptoPP::BufferedTransformation*) */

void __thiscall
CryptoPP::BaseN_Decoder::BaseN_Decoder
          (BaseN_Decoder *this,int *param_1,int param_2,BufferedTransformation *param_3)

{
  long lVar1;
  long *plVar2;
  undefined uVar3;
  long lVar4;
  int *local_58;
  undefined **local_50;
  long *local_48;
  undefined local_40;
  long local_38;
  
  uVar3 = SUB81(param_3,0);
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_58 = param_1;
  Filter::Filter((Filter *)this,(BufferedTransformation *)0x0);
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x50) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined ***)this = &PTR__BaseN_Decoder_00fef0c0;
  *(undefined ***)(this + 8) = &PTR__BaseN_Decoder_00fef270;
                    /* try { // try from 00cb8dd0 to 00cb8ddb has its CatchHandler @ 00cb8e98 */
  Filter::Detach((Filter *)this,param_3);
                    /* try { // try from 00cb8ddc to 00cb8df3 has its CatchHandler @ 00cb8e94 */
  MakeParameters<int_const*>
            ((CryptoPP *)"DecodingLookupArray",(char *)&local_58,(int **)0x1,(bool)uVar3);
                    /* try { // try from 00cb8df8 to 00cb8e43 has its CatchHandler @ 00cb8ea0 */
  plVar2 = (long *)operator_new(0x28);
  *(undefined *)(plVar2 + 2) = local_40;
  *(undefined *)((long)plVar2 + 0x11) = 0;
  lVar4 = *(long *)this;
  *(int *)(plVar2 + 4) = param_2;
  plVar2[3] = (long)local_48;
  *plVar2 = (long)&PTR__AlgorithmParametersBase_00ff0ef0;
  plVar2[1] = (long)"Log2Base";
  local_48 = plVar2;
  (**(code **)(lVar4 + 0x58))(this,&local_50);
  local_50 = &PTR__AlgorithmParameters_00feeb08;
  if (local_48 != (long *)0x0) {
                    /* try { // try from 00cb8e64 to 00cb8e67 has its CatchHandler @ 00cb8e90 */
    (**(code **)(*local_48 + 8))();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


