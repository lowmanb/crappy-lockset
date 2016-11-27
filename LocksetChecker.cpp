class LocksetChecker : public Checker<check::PreCall,
                                           check::PostCall,
                                           check::DeadSymbols,
                                           check::PointerEscape> {
public:

  void checkPreCall(const CallEvent &Call, CheckerContext &C) const;

  void checkPostCall(const CallEvent &Call, CheckerContext &C) const;

  void checkDeadSymbols(SymbolReaper &SR, CheckerContext &C) const;

  ProgramStateRef checkPointerEscape(ProgramStateRef State,
                                     const InvalidatedSymbols &Escaped,
                                     const CallEvent *Call,
                                     PointerEscapeKind Kind) const;
};
