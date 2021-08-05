class TM_Exception(Exception):
    def __init__(self, error):
        super(TM_Exception, self).__init__(error)
        self.error = error
        
    def __str__(self):
        return f"{self.error}"