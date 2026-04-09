// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetFilter
// Entry Point: 00cd85f4
// Size: 160 bytes
// Signature: undefined __thiscall SetFilter(ProxyFilter * this, Filter * param_1)


/* CryptoPP::ProxyFilter::SetFilter(CryptoPP::Filter*) */

void __thiscall CryptoPP::ProxyFilter::SetFilter(ProxyFilter *this,Filter *param_1)

{
  undefined8 *this_00;
  BufferedTransformation *this_01;
  
  if (*(long **)(this + 0x90) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x90) + 8))();
  }
  *(Filter **)(this + 0x90) = param_1;
  if (param_1 != (Filter *)0x0) {
    this_00 = (undefined8 *)operator_new(0x28);
                    /* try { // try from 00cd8630 to 00cd8637 has its CatchHandler @ 00cd86b0 */
    Algorithm::Algorithm((Algorithm *)this_00,false);
    this_00[3] = this;
    this_01 = *(BufferedTransformation **)(this + 0x90);
    *(undefined *)(this_00 + 4) = 0;
    *this_00 = &PTR__BufferedTransformation_01008a80;
    this_00[1] = &PTR__OutputProxy_01008c10;
                    /* try { // try from 00cd8658 to 00cd866b has its CatchHandler @ 00cd8694 */
    BufferedTransformation::TransferAllTo2
              (this_01,(BufferedTransformation *)this_00,(basic_string *)&DEFAULT_CHANNEL,true);
                    /* WARNING: Could not recover jumptable at 0x00cd8684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x90) + 0x178))(*(long **)(this + 0x90),this_00);
    return;
  }
  return;
}


