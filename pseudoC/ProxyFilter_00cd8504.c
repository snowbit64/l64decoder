// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProxyFilter
// Entry Point: 00cd8504
// Size: 148 bytes
// Signature: undefined __thiscall ProxyFilter(ProxyFilter * this, BufferedTransformation * param_1, ulong param_2, ulong param_3, BufferedTransformation * param_4)


/* CryptoPP::ProxyFilter::ProxyFilter(CryptoPP::BufferedTransformation*, unsigned long, unsigned
   long, CryptoPP::BufferedTransformation*) */

void __thiscall
CryptoPP::ProxyFilter::ProxyFilter
          (ProxyFilter *this,BufferedTransformation *param_1,ulong param_2,ulong param_3,
          BufferedTransformation *param_4)

{
  undefined8 *this_00;
  long lVar1;
  
  FilterWithBufferedInput::FilterWithBufferedInput
            ((FilterWithBufferedInput *)this,param_2,1,param_3,param_4);
  *(BufferedTransformation **)(this + 0x90) = param_1;
  *(undefined ***)this = &PTR__ProxyFilter_01006390;
  *(undefined ***)(this + 8) = &PTR__ProxyFilter_010065a0;
  if (param_1 != (BufferedTransformation *)0x0) {
                    /* try { // try from 00cd8544 to 00cd854b has its CatchHandler @ 00cd85a8 */
    this_00 = (undefined8 *)operator_new(0x28);
                    /* try { // try from 00cd8550 to 00cd8557 has its CatchHandler @ 00cd8598 */
    Algorithm::Algorithm((Algorithm *)this_00,false);
    this_00[3] = this;
    lVar1 = *(long *)param_1;
    *(undefined *)(this_00 + 4) = 0;
    *this_00 = &PTR__BufferedTransformation_01008a80;
    this_00[1] = &PTR__OutputProxy_01008c10;
                    /* try { // try from 00cd857c to 00cd8587 has its CatchHandler @ 00cd85a8 */
    (**(code **)(lVar1 + 0x178))(param_1,this_00);
  }
  return;
}


