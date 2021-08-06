class TM_Exception(Exception):
    def __init__(self, error, code):
        super(TM_Exception, self).__init__(error)
        self.error = error
        
        self.error_code = hex(code)
        
    def __str__(self):
        return f"{self.error} error code:{self.error_code}"