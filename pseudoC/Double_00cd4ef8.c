// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Double
// Entry Point: 00cd4ef8
// Size: 592 bytes
// Signature: undefined Double(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::ProjectiveDoubling::Double() */

void CryptoPP::ProjectiveDoubling::Double(void)

{
  long **this;
  long **this_00;
  long **pplVar1;
  long **this_01;
  long **this_02;
  long **this_03;
  long **this_04;
  long **in_x0;
  Integer *pIVar2;
  undefined8 uVar3;
  long *plVar4;
  
  this = in_x0 + 7;
  this_00 = in_x0 + 1;
  pIVar2 = (Integer *)(**(code **)(**in_x0 + 0x38))(*in_x0,this);
  pplVar1 = in_x0 + 0x20;
  Integer::operator=((Integer *)pplVar1,pIVar2);
  pIVar2 = (Integer *)(**(code **)(**in_x0 + 0x80))(*in_x0,in_x0 + 0xd,pplVar1);
  Integer::operator=((Integer *)(in_x0 + 0xd),pIVar2);
  pIVar2 = (Integer *)(**(code **)(**in_x0 + 0x90))(*in_x0,pplVar1);
  pplVar1 = in_x0 + 0x26;
  Integer::operator=((Integer *)pplVar1,pIVar2);
  pIVar2 = (Integer *)(**(code **)(**in_x0 + 0x80))(*in_x0,pplVar1,this_00);
  this_01 = in_x0 + 0x2c;
  Integer::operator=((Integer *)this_01,pIVar2);
  this_02 = in_x0 + 0x1a;
  this_03 = in_x0 + 0x14;
  pIVar2 = (Integer *)(**(code **)(**in_x0 + 0x80))(*in_x0,this_02,this_03);
  Integer::operator=((Integer *)this_02,pIVar2);
  pIVar2 = (Integer *)(**(code **)(**in_x0 + 0x90))(*in_x0,this_00);
  this_04 = in_x0 + 0x32;
  Integer::operator=((Integer *)this_04,pIVar2);
  plVar4 = *in_x0;
  uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4,this_04);
  uVar3 = (**(code **)(*plVar4 + 0x20))(plVar4,uVar3,this_04);
  pIVar2 = (Integer *)(**(code **)(*plVar4 + 0x20))(plVar4,uVar3,this_02);
  Integer::operator=((Integer *)this_04,pIVar2);
  pIVar2 = (Integer *)(**(code **)(**in_x0 + 0x90))(*in_x0,this_04);
  Integer::operator=((Integer *)this_00,pIVar2);
  (**(code **)(**in_x0 + 0x50))(*in_x0,this_00,this_01);
  (**(code **)(**in_x0 + 0x50))(*in_x0,this_00,this_01);
  (**(code **)(**in_x0 + 0x50))(*in_x0,this_01,this_00);
  pIVar2 = (Integer *)(**(code **)(**in_x0 + 0x80))(*in_x0,this_04,this_01);
  Integer::operator=((Integer *)this,pIVar2);
  pIVar2 = (Integer *)(**(code **)(**in_x0 + 0x90))(*in_x0,pplVar1);
  Integer::operator=((Integer *)this_03,pIVar2);
  plVar4 = *in_x0;
  uVar3 = ModularArithmetic::Half((ModularArithmetic *)plVar4,(Integer *)this_03);
                    /* WARNING: Could not recover jumptable at 0x00cd5144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x50))(plVar4,this,uVar3);
  return;
}


